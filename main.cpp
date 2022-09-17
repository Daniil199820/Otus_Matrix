#include"lib_matrix.h"

int main(){

    Matrix<int,0,2> m;
    
    for(size_t i=0;i<=9;++i){
        m[i][i]=i;
        m[i][9-i] = 9-i;
    }
    std::cout<< "Printing fragment:\n";
    for(size_t i=1;i<=8;++i){
        for(size_t j=1;j<=8;++j){
            std::cout << m[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<< "Printing size:\n";
    std::cout<<m.size()<<"\n";
    std::cout<<"Printing all elements:\n";
    int l=0;
    for(auto it:m){
        size_t x,y;
        int val;
        std::tie(x,y,val) = it;
        ++l;
        std::cout<<l<<" : Matrix: [" <<x<<"]["<<y<<"] = "<<val<<"\n";
    }
    
    return 0;
}