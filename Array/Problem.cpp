#include <bits/stdc++.h>
using namespace std;
 int  remain(){
      int n,m;
       cin>>n>>m;
          int c=0;
          for(int i=0;i<n;i++){
                int temp;
                 cin>>temp;
                   c+=temp;
          }
           int result= c%m;
           return result;

 }
 int main(){
      int t;
       cin>>t;
          for(int i=0;i<t;i++){
               long result=remain();
                cout<<"Case #"<<i+1<<": "<<result<<endl;
          }
 }