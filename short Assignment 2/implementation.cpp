#include <iostream>
#include "Student.h"
#include "Address.h"
using namespace std;

//Address' constructor
Address::Address(string sn = "", int hn = 0, string an = "", string ct = "", string st = "", string cou = ""){
    streetName = sn;
    houseNum = hn;
    apartmentName = an;
    city = ct;
    state = st;
    country = cou;
};

//Student's Constructor
Student::Student(string id = "0"){
    Student::studentId = id;
    Student::grade = 3.8;
};



//function to create an address 
void Student::addAddress(string sn, int hn, string an, string ct, string st, string cou){
    Address a = Address(sn, hn, an, ct, st, cou);
    Student::address = a;
};

//student's display function
//something interesting i ran into. initially i was using the + operand to join the variables and strings in cout but it wouldnt work for Student::grade which is a float.
//i found out i cannot use it there because grade is a float, so instead i had to use << or call a to_string from std.
void Student::display(){
    cout<< Student::name << " - has a student id: " << Student::studentId << ", email: " << Student::email << ", and final GPA of: " << Student::grade << "." <<endl;
    Student::address.display();
};

//address' display function
void Address::display(){
    cout<< Address::houseNum << " " << Address::streetName << " " << Address::apartmentName << " " << Address::city << ", " << Address::state << " " << Address::country << "\n" <<endl;
};
