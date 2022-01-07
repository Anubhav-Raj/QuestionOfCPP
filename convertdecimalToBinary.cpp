#include<iostream>
using namespace std;
// function to convert decimal to binary
 int  fun(int n)
 {
     // it is array to store binary count;
       int  num[32];

// counter for binary array
        int count=0;

      while (n>0)
      {
       // storing remainder in binary array
        num[count]= n % 2;
        n=n/2;
        count++;
      }
       // printing binary array in reverse order
       for (int i = count-1; i >= 0; i--)
       {
           cout<<num[i];
       }
  
 }
 int main()
 {
         int n;
         cout<<"Enter the Decimal Number:";
         cin>>n;
          fun(n);
         return 0;
 }