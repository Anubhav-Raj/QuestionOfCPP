#include <bits/stdc++.h>
#include "vehicle.cpp"
using namespace std;
class Car : protected Vehicle
{
public:
    int numGears;
    

    void print()
    {
        cout << "Num Typer :" << numTyres << endl;
        cout << "Color : " << color << endl;
        cout << "Num gares :" << numGears << endl;
    }
    
    Car(int x): Vehicle(x)
    {
        cout << "Car's defult constructor" << endl;
    }
    ~Car()
    {
        cout << "car's Desturctor" << endl;
    }

}; 