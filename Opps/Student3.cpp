#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    static int totalStudent;

public:
    int age;
    int roll_number;

    Student()
    {
        Student::totalStudent++;
    }
    int getRollNumber()
    {
        return roll_number;
    }
    static int getTotalStudent()
    { // this function belong to calss
        return totalStudent;
    }
};
int Student::totalStudent = 0;