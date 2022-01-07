
#include<iostream>
using namespace std;
 int power( int n){
     //base condition
       if(n==0)
            return 1;
            // recurive realation 
         int smallproblem= power(n-1);
           return 2*smallproblem;
       
 }
int main()
{
     int n;
      cin>>n;
      cout<< power(n)<<endl;
}

