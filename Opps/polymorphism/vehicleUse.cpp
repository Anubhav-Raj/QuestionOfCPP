#include <bits/stdc++.h>
#include "vehicle.cpp"
#include "car.cpp"
using namespace std;
int main()
{
    // Code Here
    Vehicle v;
    car c;
     //v.print();
     //c.print();
      Vehicle *v1= new Vehicle;// create a pointer vehicle type
       Vehicle *v2;
        v2 = &c;
         v2->print(); 

    return 0;
}