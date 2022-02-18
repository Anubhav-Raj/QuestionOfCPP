#include <bits/stdc++.h>
using namespace std;
  long long zeroCount( long long n){
     static  long long cnt=0;
     
         if(n>0) {
            // processing
              long long temp=n%10;
              if(temp==0){
                   cnt++;
              }
                zeroCount(n/10);
         }
                 return cnt;
 }
 int main(){
//Code Here
   long long n;
   cin>>n;
    cout<<"Total no of zero is: "<<zeroCount(n)<<endl;

 return 0;
}