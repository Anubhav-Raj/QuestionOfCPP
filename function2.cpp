#include<iostream>
using namespace std;
 void  oddeve(int n)
 {
     if(n%2==0)
     {
         cout<<"Even number";

     } else{
          cout<<"odd number";
     }
 }
 int main()
 {
       int n;
       cout<<"Enter the number:";
       cin>>n;
       oddeve(n);
 }