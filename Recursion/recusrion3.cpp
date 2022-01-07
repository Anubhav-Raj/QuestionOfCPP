#include<iostream>
using namespace std;
 void count(int n)
 {
      if(n >0)
      {  count(n-1);
         cout<<n<<" ";
           
      }else{
       return;
      }
     
 }

 int main()
{
   int n;
    cout<<"Enter the number:";
     cin>> n;
      count(n);
}