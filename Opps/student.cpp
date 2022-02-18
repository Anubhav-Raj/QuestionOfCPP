#include <iostream>
#include <string>
using namespace std;
class student
{
private: // private mamber of class cant acess outside the class
     string name;

public:
     int roll_no;
     int age;

public:
     // Defult consturcter( it call firstly automatically)

     student()
     {
          cout << "It is defuult consturcter" << endl;
     }
     ~student()
     {
          cout << "Destructer is called !" << endl;
     }

     // parameterized Constructer
     student(int roll_no, int age, string name)
     {
          // cout<<"It is parameterized Constructer"<<endl;
          this->roll_no = roll_no;
          this->age = age;
          this->name = name;
     }
     // Copy Constructer
     student(student &temp)
     { // temp pass by referance to prevent infinit loop
          cout << "Copy Constucter is Called! " << endl;
          this->name = temp.name;
          this->age = temp.age;
          this->roll_no = temp.roll_no;
     }

     void display()
     {
          cout << endl;
          cout << "[ Name:" << name << " ,";
          cout << " Roll No:" << roll_no << " ,";
          cout << " Age:" << age << " ]";
          cout << endl
               << endl;
     }
     string getName()
     {
          return name;
     }
     void setName(string name)
     {
          if (name.length() == 0)
          {
               cout << " plzz Enter the name " << endl;
               return;
          }
          this->name = name; //  whith the help of this keyword we set  class me jo peivate name hai usme  argument me jo name aaya hai use set kr rahe hai
     }
};