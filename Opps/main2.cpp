#include <bits/stdc++.h>
#include "student.cpp"
using namespace std;
int main()
{
    // Code Here
    student s1;

    s1.setName("Anubhav");
    s1.display();

    student *s2 = new student;
    s2->setName("");
    s2->display();
    return 0;
}