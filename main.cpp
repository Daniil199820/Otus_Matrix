#include<iostream>
#include<memory>
#include<vector>
#include<map>
#include<array>
#include<unordered_map>

template <typename mat,std::size_t dimension>
class matrix_helper{
private:    
    friend mat;
    friend class matrix_helper<mat,dimension+1>;
    
    mat& parent_matrix;
    std::vector<size_t> arr_index;

    matrix_helper(mat& parent_matrix, size_t index):
     parent_matrix(parent_matrix){
        arr_index.push_back(index);
     }

    matrix_helper(mat& parent_matrix,size_t index, std::vector<size_t> arr_index):
    parent_matrix(parent_matrix),arr_index(arr_index){
        arr_index.push_back(index);
    }

public:
    matrix_helper<mat,dimension-1> operator[](size_t index){
        return matrix_helper<mat,dimension-1>(m,index,arr_index);
    }


};

template<typename T, T t, size_t dim>
class Matrix{
private:
std::map<std::vector<size_t>,T> storage;

template<size_t dimension, T default_value>
class matrix_helper{
private:
    std::vector<size_t> arr_index;

    Matrix& parent_matrix;

public:
    matrix_helper(Matrix& m,std::vector<size_t> curr_arr)
    :parent_matrix(m),arr_index(curr_arr){};

    auto operator[](size_t index){
        return matrix_helper<dimension-1,default_value>{
            parent_matrix, 
        }; 
    }
};

//partial spesialization
template<T default_value>
class matrix_helper<1, default_value>{
private:
    T value_def = default_value;
    std::vector<size_t> arr_index;
    Matrix& parent_matrix;

public:

    matrix_helper(Matrix& m,std::vector<size_t> curr_arr):
    parent_matrix(m),arr_index(curr_arr){
        auto it = parent_matrix.storage.find(arr_index);
        if(it != parent_matrix.storage.end())
           value_def = it->second; 
    }
};


public:

auto operator[](size_t index){
    return matrix_helper<dim,t>{*this, std::vector<size_t>{index}};
}
};

   
     
//https://stackoverflow.com/questions/36418213/n-dimensional-matrix-operator




int main(){

    Matrix<int,5,2> m;
    m[3][2] = 32;
    std::cout<< m[3][2]<<"\n";
    
    

    return 0;

}