// solve  power  problem using recursion  
#include<iostream>
using namespace std;
 int  power(int x, int n)
 {
      if(n==0)
      {
          return 1;
      } 
       int smalloutput= power(x,n-1);
          return x* smalloutput;
 }
 int main()
 {
      int x,n;
        cout<<"Enter the  X:";
        cin>>x;
        cout<<"Enter  the  N:";
        cin>>n;
          int pow= power(x,n);
          cout<<"Power is :"<<pow;
 }