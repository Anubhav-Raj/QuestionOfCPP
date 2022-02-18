#include <bits/stdc++.h>
#include "hero.cpp"
using namespace std;
int main(){
//Code Here
  hero h1;
   h1.setHealth(23);
   h1.setleve('D');
    char  name[8]= "anubhav";
   h1.setName(name);
    h1.print();

     // Copy defult copy constructer
      hero h2(h1);
       h2.print();
        
         h1.name[0]='R';
          h1.print();

          
           h2.print();

 return 0;
}