#include<iostream>
using namespace std;
 void fab(int n)
 {
     int term1=0;
     int term2=1;
      int nextTerm;
      for(int i=1; i<=n; i++)
      { cout<<term1<<",";
           nextTerm= term1+ term2;
             term1=term2;
             term2=nextTerm;
             

      }
 }
int main(){
     int n;
     cout<<"Enter the number:";
     cin>>n;
     fab(n);
}