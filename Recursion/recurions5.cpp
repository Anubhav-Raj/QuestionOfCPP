#include<iostream>
using  namespace std;
int  fabnoic(int n)
 {
    if(n==0)
    {
         return 0;
    }  if(n==1)
    {
        return 1;
    } 
     int fact1=fabnoic(n-1);
     int fact2=fabnoic(n-2);
      return fact1+fact2;
 }
 int main()
 {
      int  n;
      cout<<"Enter the number:";
      cin>>n;
       int output= fabnoic(n);
        cout<<"Fabnoic number is:"<<output;
 }