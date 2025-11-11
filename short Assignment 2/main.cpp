#include <iostream>
#include "Student.h"
#include "Address.h"

using namespace std;

int main(){
    Student colton = Student("cdstan");
    colton.email = "cdstan1@ilstu.edu";
    colton.name = "Colton Stanek";
    colton.addAddress("S Fell Ave", 319, "Watterson", "Normal", "IL", "USA");
    colton.display();

    Student rishi = Student("rsaripa");
    rishi.email = "rishi.saripalle@ilstu.edu";
    rishi.name = "Rishi Sarpalle";
    rishi.display();
    return 0;
};