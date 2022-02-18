#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int age;
    const int roll_number;
     int &x;// age referance variable

public:
   // here we are doing intiializationli List
    Student(int r ,int age) :roll_number(r), age(age),x(this -> age){
       // roll_number = r;
    }
}; 