#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
     void print(){
          cout<<endl<<this->real<<" + "<<this->imaginary<<"i"<<endl; 
     }
    void add(Complex const &c2)
    {
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }
      void mul(Complex const &c2)
    {
        this->real = this->real * c2.real;
        this->imaginary = this->imaginary * c2.imaginary;
    }
};
