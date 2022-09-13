#include<iostream>
#include<memory>
#include<vector>
#include<map>


template<typename T, T t, size_t dim>
class Matrix{
private:

template<typename U, size_t dimension>
class Matrix_helper{
private:

    std::array<size_t, dimension> arr_index;

    Matrix& parent_matrix;

public:
    Matrix_helper(Matrix& m,std::array<size_t, dimension> curr_arr)
    :parent_matrix(m),arr_index(curr_arr){};

    auto operator[](size_t index){
        
    }
};

//partial spesialization
template<typename U>
class Matrix_helper<U,1>{
private:
    std::map<int, T> node_data;

public:
    T& operator[](int index){
        return node_data[index];
    }

    size_t size(){
        return node_data.size();
    }

    T& operator=(T val){
        return val;
    }
};

   
     
};
//https://stackoverflow.com/questions/36418213/n-dimensional-matrix-operator




int main(){

    //Matrix_acc<int,5,2> m;
    //m[3][2] = 32;
    //std::cout<< m[3][2]<<"\n";
    
    

    return 0;

}