#include <bits/stdc++.h>
#include "student.cpp"
using namespace std;
int main()
{

    // Creating object using Statically (get menory in stack)
    student s1; // we can make multiple object student s1,s2,s4,s5 ...etc;
    s1.age = 23;
    s1.roll_no = 101;
    cout << "S1 age: " << s1.age << endl;
    cout << "s1 roll_no : " << s1.roll_no << endl;
    // Creating object dynamically (get menont in heep)
    student *s2 = new student;

    // In Dynamically  one way to acess memory location
    s2->age = 44;
    s2->roll_no = 104;
    cout << "S2 age: " << s2->age << endl;
    cout << "s2 roll_no : " << s2->roll_no << endl;

    student *s3 = new student;
    // In Dynamically  Second method to acess memory location
    (*s3).age = 43;
    (*s3).roll_no = 103;
    cout << "S3 age: " << (*s3).age << endl;
    cout << "s3 roll_no : " << (*s3).roll_no << endl;

    // if you want to acess the private mamber of  class
    cout << "Student  name using  get mentod " << s1.getName() << endl;
    // if  you want to set value of a private mamber  of class
     s1.setName("");

    // if you want to acess the private mamber of  class
    cout << "Student  name using  get mentod " << s2->getName() << endl;
    // if  you want to set value of a private mamber  of class
     s2->setName("rohit");

       // if you want to acess the private mamber of  class
    cout << "Student  name using  get mentod " << (*s3).getName() << endl;
    // if  you want to set value of a private mamber  of class
     (*s3).setName("GFG");


    // print the  value of s1 using function
    s1.display();
    s3->display();
    (*s2).display();

    return 0;
}