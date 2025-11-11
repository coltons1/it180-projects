#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Address.h"

using namespace std;

//Student class
class Student{
    private:
        //student class private variables
        string studentId;
        Address address;
        float grade;

    public:
        //student class public variables
        string email;
        string name;
        
        //student class parameterized constructor
        Student(string id);

        //student class functions to be implemented in implementation.cpp
        void addAddress(string, int, string, string, string, string);
        void display();
};

#endif