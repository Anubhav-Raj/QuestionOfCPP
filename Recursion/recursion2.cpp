// solve the  problem of  factriola
#include<iostream>
 using namespace std;
  int  factriol(int n)
  {
       if(n==0)
       {
            return 1;
       }
        int smallout= factriol(n-1);
         return n* smallout;
  }
  int main()
  {
       int n;
       cout<<"Enter the number: ";
       cin>>n;
        int fact = factriol(n);
         cout<<"Factriol is :"<<fact;  

  }