#include<iostream>
using namespace std;
 int main()
 {
      int  n;
      cout<<"Enter the  size of Array:";
      cin>>n;
       int arr[n];
       cout<<"Enter the Element:";
       for (int i =0; i < n; i++)
       {
           cin>>arr[i];
       }
        cout<<"Enter the number which you have to find:";
          int find,j;
          cin>>find;
        for (j = 0; j < n; j++)
        {
          if(find == arr[j])
          {
               cout<<"Find sucessfully at "<<j<<" th postion";
               break;
          } 
        }
          if(j==n)
           cout<<"opps! not found";
            
        
       
    
 }