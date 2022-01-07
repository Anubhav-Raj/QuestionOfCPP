#include<iostream>
using namespace std;
 int main()
 {
       int n;
      cout<<"Enter the size of array: ";
      cin>>n;
       int arr[n],output[n];
      cout<<"Enter the element  of Array: ";
      for (int i = 0; i < n; i++)
      {
          cin>>arr[i];
      }
     
      
       for (int i = 0; i < n; i++)
       {
            if(i==0) {
                 output[i]=arr[0];
                 
           } else{
            output[i]=arr[i]+output[i-1];
           }

            cout<<output[i]<<" ";

       }
        
       
 }