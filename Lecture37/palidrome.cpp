#include <bits/stdc++.h>
using namespace std;
 bool plaidrom(string str, int l, int r){
  // base case
   if(l<r)
   return true;

    if(str[l]!=str[r]){
        return  false;
    }
      plaidrom(str,l+1,r-1);

 }
int main(){
//Code Here
  string str="racecar";
   int l=0,r=str.length()-1;
 if(plaidrom(str,l,r)){
      cout<<"Yes  ! it is Palidrom"<<endl;
 } else{
       cout<<"No  ! it is  Not Palidrom"<<endl;
 }
 return 0;
}