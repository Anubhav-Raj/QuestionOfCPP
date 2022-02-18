#include <bits/stdc++.h>
#include "dynamicArrayClass.cpp"
using namespace std;
int main(){
//Code Here
DynamicArray a1;
 
 a1.addElement(100);
 a1.addElement(101);
 a1.addElement(102);
 a1.addElement(103);
 a1.addElement(104);
 a1.addElement(105);
 a1.addElement(106);
 a1.print();
 DynamicArray a2(a1);// copy Constructer
   DynamicArray a3;
  a3=a1;
   a1.add(0,104);
    a1.print();
    a2.print();
     a3.print();


 return 0;
}