#include<iostream>
using namespace std;
 void cheack(int ch)
 {
     if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
     { 
        cout<<"It is alphabate";
     }else{
         cout<<"it is not alphabate";
     }
 }
 int main()
 {
       char ch;
       cout<<"Enter the Char:";
       cin>>ch;
        cheack(ch);
 }