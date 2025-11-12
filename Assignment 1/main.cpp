#include <iostream>
#include "Matrix.h"

using namespace std;

int main(){

    //Testing multiplication operator. 
    cout<<"Multiplication Test"<<endl;
    Matrix m1 = Matrix();
    Matrix m2 = Matrix();
    m1.to_string();
    m2.to_string();
    cout<<"\n"<<endl;
    Matrix m3 = m1 * m2;
    m3.to_string();

    cout<<"Equals Test"<<endl;
    Matrix m4 = Matrix();
    Matrix m5 = m4;
    m4.to_string();
    m5.to_string();
    bool matrixEquvialence = (m4 == m5);
    cout<<"Are they equal?: " << matrixEquvialence <<endl;


}