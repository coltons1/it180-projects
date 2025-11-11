#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
using namespace std;

//Address class, not detailed in Student.java but necessary for address object in student class
class Address{
    private:
        //address class private variables
        string streetName;
        int houseNum;
        string apartmentName;
        string city;
        string state;
        string country;
    public:
        //parameterized constructor for address
        Address(string sn, int hn, string an, string ct, string st, string cou);

        //address' display function declaration
        void display();
};

#endif