
#include<iostream>
using namespace std;
 int fact( int n){
       if(n==0){
            return 1;
       }
       /* int smallproblem=;
         int bigproblem= ;
          return bigproblem;*/
          
          // both are same
           return n*fact(n-1);
 }
int main()
{
     int n;
      cin>>n;
      cout<< fact(n)<<endl;
}

