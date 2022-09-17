#pragma once

#include<iostream>
#include<vector>
#include<map>


//https://stackoverflow.com/questions/36418213/n-dimensional-matrix-operator


template<typename T, T t, size_t dim>
class Matrix{
private:
std::map<std::vector<size_t>,T> storage;

template<size_t dimension, T default_value>
class matrix_helper{
private:

     Matrix& parent_matrix;

    std::vector<size_t> arr_index;


    std::vector<size_t> add_to_vector(size_t& index){
        arr_index.push_back(index);return arr_index;
    }

public:
    matrix_helper(Matrix& m,std::vector<size_t> curr_arr)
    :parent_matrix(m),arr_index(curr_arr){}

    

    auto operator[](size_t index){
        return matrix_helper<dimension-1,default_value>(parent_matrix,
        add_to_vector(index));
    }
};

//partial spesialization
template<T default_value>
class matrix_helper<1, default_value>{
private:
    T value_def = t;

    Matrix& parent_matrix;

    std::vector<size_t> arr_index;

public:

    matrix_helper(Matrix& m,std::vector<size_t> curr_arr):
    parent_matrix(m),arr_index(curr_arr){
        auto it = parent_matrix.storage.find(arr_index);
        if(it != parent_matrix.storage.end())
           value_def = it->second; 
    }

    matrix_helper& operator=(T value){
        if(value==value_def){
            parent_matrix.storage.erase(arr_index);
        }
        else{
            parent_matrix.storage[arr_index] = value;
        }
        value_def = value;
        return *this;
    }

    operator T() const{
        return value_def;
    }
};


public:

class iterator{
private:
typename std::map<const std::vector<size_t>,T>::iterator it_;


template <typename U, std::size_t... Idx>
auto vectorToTupleHelper(const std::vector<U>& v, std::index_sequence<Idx...>){
    return std::make_tuple(v[Idx]...);
}

template <typename U>
auto vectorToTuple(const std::vector<U>& v){
    return vectorToTupleHelper(v, std::make_index_sequence<dim>());
}

public:

iterator(typename std::map<std::vector<size_t>,T>::iterator itr):it_(std::move(itr)){}

iterator& operator++(){
    ++it_;
    return *this;
}

iterator& operator--(){
    --it_;
    return *this;
}

auto operator* (){
    return std::tuple_cat(vectorToTuple(it_->first),std::tie(it_->second));
}

friend bool operator!= (const iterator& lhs, const iterator& rhs){
    return lhs.it_ != rhs.it_;
}

};


auto operator[](size_t index){
    return matrix_helper<dim,t>(*this, std::vector<size_t>{index});
}

size_t size() const{
    return storage.size();
}

iterator begin(){
    return iterator(storage.begin());
}

iterator end(){
    return iterator(storage.end());
}

};


