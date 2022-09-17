#include "lib_matrix.h"
#include <gtest/gtest.h>

TEST(LIB_MATRIX,operator){
    Matrix<int,-1,2>m;
    m[3][4] = 65;
    ASSERT_EQ(m[3][4],65);
    ASSERT_EQ(m[1][123],-1);
}

TEST(LIB_MATRIX,size){
    Matrix<int,0,2>m;
    ASSERT_EQ(m.size(),0);
    m[3][4] = 4;
    m[4][3] = 1;
    ASSERT_EQ(m.size(),2);
    m[3][4] = 10;
    ASSERT_EQ(m.size(),2);
    m[5][7] = 0;
    ASSERT_EQ(m.size(),2);
}


TEST(LIB_MATRIX,n_dimensional){
    Matrix<int,0,5>m1;
    m1[3][4][12][1][5] = 4;
    ASSERT_EQ(m1[3][4][12][1][5],4);
    Matrix<int,0,4>m2;
    m2[8][1][4][5] = 78;
    ASSERT_EQ(m2[8][1][4][5],78);
}
