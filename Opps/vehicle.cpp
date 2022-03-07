#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;

    void print()
    {
        cout << " MaxSpeed:" << maxSpeed << endl;
    }
    Vehicle(int maxSpeed)
    {
        cout << "Vehicale  Parametrized Constructer" << endl;
        this->maxSpeed = maxSpeed;
    }

    Vehicle()
    {
        cout << "Vehicale's defult constructor" << endl;
    }
    ~Vehicle()
    {
        cout << "Vechicale's Desturctor" << endl;
    }
};
