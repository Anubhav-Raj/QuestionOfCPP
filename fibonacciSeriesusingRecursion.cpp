#include<iostream>
using  namespace std;
 int fab(int n){
     if(n==2||n==1){
          return 1;
     }
      return fab(n-1)+ fab(n-2);
 }
int main()
{
     int n;
     cin>>n;
      cout<<fab(n);
     return 0;
}