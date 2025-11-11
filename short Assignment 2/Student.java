package it180; 

public class Student {

    private String studentId;
    public String email;
    public String name;
    private Address address; 

    public Student(String id) {
        studentId = id;
    }
    public addAddress(String sn, int hn, String an, String ct, String st, String cou){
        address = new Address(sn,hn,an,ct,st,cou);
    }
    public void display() {
        System.out.println(
                name + " - has student id: " + studentId + ", email: " + email + ", and final GPA of: " + grade);
        address.display();
    }

    public static void main(String args[]) {
        Student rishi = new Student("rsaripa");
        rishi.email = "rishi.saripalle@ilstu.edu";
        rishi.name = "Rishi Saripalle";
        rishi.display();
    }

}