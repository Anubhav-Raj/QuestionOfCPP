#include <bits/stdc++.h>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void setdenominator(int denominator)
    {
        this->denominator = denominator;
    }
    void setnumerator(int numerator)
    {
        this->numerator = numerator;
    }
    int getnumerator() const
    {
        return this->numerator;
    }
    int getdenominator() const
    {
        return this->denominator;
    }

    void print() const
    { // now it is constant function

        cout << endl;
        cout << this->numerator << " / " << this->denominator << endl;
    }
    void simplify()
    {
        int GCD = 1;
        int mini = min(this->numerator, this->denominator);

        for (int i = 1; i <= mini; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                GCD = i;
            }
        }

        this->numerator = this->numerator / GCD;
        this->denominator = this->denominator / GCD;
    }

    Fraction operator+(Fraction const &f2) const
    {
        // this is add function which add two fraction (f1,f2)  and   store into new (fnew)
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int sum = (x * this->numerator) + (y * f2.numerator);

        Fraction fnew(sum, lcm);
        fnew.simplify();
        return fnew;
    }

    void sub(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int diff = (x * this->numerator) - (y * f2.numerator);
        this->numerator = diff;
        this->denominator = lcm;
        simplify(); // or simplify()
    }
    Fraction operator-(Fraction const &f2) const
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int diff = (x * this->numerator) - (y * f2.numerator);
        Fraction fnew(diff, lcm);
        fnew.simplify();
        return fnew;
    }
    void mul(Fraction const &f2)
    {
        this->denominator = this->denominator * f2.denominator;
        this->numerator = this->numerator * f2.numerator;
        simplify(); // or simplify()
    }
    Fraction operator*(Fraction const &f2) const
    {

        int x = this->denominator * f2.denominator;
        int y = this->numerator * f2.numerator;
        Fraction fnew(y, x);
        fnew.simplify(); // or simplify()
        return fnew;
    }
    bool operator==(Fraction const &f2) const
    {
        if (this->denominator == f2.denominator && this->numerator == f2.numerator)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // pre -increment
    Fraction &operator++()
    {
        // return the function by referance
        this->numerator = this->numerator + this->denominator;
        simplify();
        return *this;
    }
    // post-increment
    Fraction operator++(int)
    {
        Fraction fnew(this->numerator, this->denominator);
        this->numerator = this->numerator + this->denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
    Fraction& operator+=(Fraction const &f2)
    {
        // this  is Add function add two fraction f1,f2 and store into f1
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int sum = (x * this->numerator) + (y * f2.numerator);
        this->numerator = sum;
        this->denominator = lcm;
        simplify(); // or simplify()
         return *this;
    }
};
