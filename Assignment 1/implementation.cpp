#include <iostream>
#include "Matrix.h"
using namespace std;


//Matrix Default Constructor
Matrix::Matrix(){
    
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            arr[row][col] = rand() % 10;
        }
    };
};

//Matrix to string
void Matrix::to_string(){
    for(int row = 0; row < 3; row++){
        cout<< "[ ";
        for(int col = 0; col < 3; col++){
            cout<< arr[row][col] << " ";
        }
        cout<< "]"<<endl;
    }
};

//Matrix multiplication operator
Matrix Matrix::operator * (Matrix &m){
    //declaring the matrix to be returned
    Matrix newMatrix;
    //making sure each value of the new matrix is 0 instead of random.
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            newMatrix.arr[row][col] = 0;
        }
    };

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            for(int i = 0; i < 3; i++){
                newMatrix.arr[row][col] += (this->arr[row][i] * m.arr[i][col]);
            }
        }
    }
    return newMatrix;
};

//Matrix == operator
bool Matrix::operator == (Matrix &m){
    bool matricesEqual = true;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if(this->arr[row][col] != m.arr[row][col]){
                matricesEqual = false;
            }
        }
    }
    return matricesEqual;
};


