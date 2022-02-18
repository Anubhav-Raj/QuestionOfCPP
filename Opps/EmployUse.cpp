#include <bits/stdc++.h>
#include "Employ.cpp"
using namespace std;
int main(){
//Code Here
  char name[]="Anubhav";
 Employ e1(23,name);
  e1.print();
  
 
  Employ e2(e1);
   e2.name[0]='P'; 
  e2.print();
  e1.print();

 
   
     


 return 0;
}