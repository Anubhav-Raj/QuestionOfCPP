#include<iostream>
using namespace  std;
int m= 10;// global m
 int main()
 {
      int m=20;// m  redeclared local to main;
      {
          int k=m;  
          int  m=30; // m declared again  local to inner block
           cout<<" we  are in inner  block \n";
           cout<<"K ="<<k<<endl;
             cout<<"m ="<<m<<endl;
           cout<<"::m "<<::m<<endl;
      }
          cout<<" we  are in outer   block \n";
           cout<<"m ="<<m<<endl;
           cout<<"::m "<<::m<<endl;
     return 0;
 }
 /* ::   scope resoulation operator */