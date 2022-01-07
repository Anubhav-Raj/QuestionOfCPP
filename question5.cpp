//Write a Program to Check Whether Number is Even or Odd (Using ternary operators)
#include <iostream>
using namespace std;
 int main()
 {
      int A;
      cout<<"Enter  number:";
    cin>>A;
      (A%2==0)?cout<<"Even" : cout<<"odd";
      return 0;
 }
/* CONCEPT:
We used ternary operators ?: instead of if..else statement. The ternary operator is a
shorthand notation of if...else statement.*/