#include <bits/stdc++.h>
#include "car.cpp"
using namespace std;
 class hondaCity : public Car
 {

 public:
     hondaCity( int x): Car(x){
          cout<<"Honda City  parameterized constructor"<<endl;
     }
     ~hondaCity(){
          cout<<"Honda city destructor"<<endl;
     }
 };
 

 