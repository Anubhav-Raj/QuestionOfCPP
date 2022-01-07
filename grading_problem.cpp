#include <bits/stdc++.h>

using namespace std;

int closestMultiple(int n, int x)
{  
    if(x>n)
       return x;
 
    n = n + round((x/2.0));
    n = n - (n%x);
    return n;
}

 int main(){
      int s;
      cin>>s;
       int gread[s];
       for(int i=0; i<s;i++){
           cin>>gread[i];
       }
        for(int i=0;i<s;i++){
         if(gread[i]%5!=0){
         int  multiple = closestMultiple(gread[i],5);
         int diff= abs(multiple-gread[i]);
          if((gread[i]+diff) >= 40){
                 
                   if(diff<3){
                        gread[i]=multiple;
                   }
             }
         }
            
        }
         for (int i=0; i<s; i++) {
             cout<<gread[i]<<endl;
         }
      return 0;
 }
