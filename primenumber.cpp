#include<iostream>
#include<cmath>
using namespace std;
  int main()
  {
      int  num1;
      cout<<"Enter thr number";
      cin>> num1;
      int i;
       bool flag=0;
        for(i=2; i<=sqrt(num1);i++)
        {
             if(num1%i==0)
             {
                 cout<<"non prime "<<endl;
                  flag=1;
                  break;
             } 
        }
        if(flag==0)
        {
         cout<<"prime number";
        }

  }