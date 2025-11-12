#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;


//Matrix Class
class Matrix{
    public:
        //declaring the array, constructor, and functions
        int arr[3][3];
        Matrix();
        void to_string();

        Matrix operator * (Matrix &m);
        bool operator == (Matrix &m);

};


#endif 