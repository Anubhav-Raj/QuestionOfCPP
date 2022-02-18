#include <bits/stdc++.h>
#include "Student3.cpp"
using namespace std;
int main()
{
    // Code Here
    Student s1, s2, s3, s4, s5;
    cout << s1.age << " " << s1.roll_number << endl;
    // cout << Student::totalStudent << endl;// this is when totalStudent is public
    cout << Student::getTotalStudent() << endl;
    return 0;
}