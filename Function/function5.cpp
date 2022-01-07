#include<iostream>
using namespace std;
 void natural(int n)
 {
      if(n<=0)
      { 
          cout<<"only input  netural number";     
      }else{
        int net= (n)*(n+1)/2;
        cout<<"Sum of n netral number:"<<net;
      }
       
 }
  int main()
  {
    int n; 
    cout<<"Enter the number:";
     cin>>n;
      natural(n);
  }