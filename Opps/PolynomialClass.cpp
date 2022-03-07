#include <bits/stdc++.h>
using namespace std;
class polynomial
{
    int *degCoeff;
    int capacity;

public:
    // Defult Constructor
    polynomial()
    {
        degCoeff = new int[3]{0};
        capacity = 3;
    }
    // Parameterized Constructer
    polynomial(int capacity)
    {
        this->degCoeff = new int[capacity + 1]{0};
        this->capacity = capacity;
    }

    // Copy constructer
    polynomial(polynomial const &c)
    {
        int *newdegCoeff = new int[c.capacity+1]{0};
        for (int i = 0; i <= c.capacity; i++)
        {
            newdegCoeff[i] = c.degCoeff[i];
        }
        //delete[] degCoeff;
        this->degCoeff = newdegCoeff;
        this->capacity = c.capacity;
    }

    // copy Assigment operater
    void operator=(polynomial const &c)
    {
        int *newdegCoeff = new int[c.capacity]{0};
        for (int i = 0; i <= c.capacity; i++)
        {
            newdegCoeff[i] = c.degCoeff[i];
        }
        delete[] degCoeff;
        this->degCoeff = newdegCoeff;
        this->capacity = c.capacity;
    }

    // cofficient Set Function
    void setCoefficient(int coefficient, int degree)
    {
        if (degree > capacity)
        {
            int newCapacity = degree;
            int *newdegCoeff = new int[newCapacity + 1]{0};
            for (int i = 0; i <= capacity; i++)
            {
                newdegCoeff[i] = degCoeff[i];
            }
            delete[] degCoeff;
            this->degCoeff = newdegCoeff;
            this->capacity = newCapacity;
            degCoeff[degree] = coefficient;
        }
        else
        {
            degCoeff[degree] = coefficient;
        }
    }
    void print()
    {
        for (int i = 0; i <= this->capacity; i++)
        {
            if (degCoeff[i] != 0)
                cout << degCoeff[i] << "x" << i << " ";
        }
        cout << endl;
    }

    // operater overload  +
    polynomial operator+(polynomial const &p2)
    {
        int total_capacity = max(this->capacity, p2.capacity);
        polynomial p3(total_capacity);

        for (int i = 0; i <= total_capacity; i++)
        {
            if (this->capacity >= i && p2.capacity >= i)
            {
                p3.degCoeff[i] = this->degCoeff[i] + p2.degCoeff[i];
            }
            else if (this->capacity >= i)
            {
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else if (p2.capacity >= i)
            {
                p3.degCoeff[i] = p2.degCoeff[i];
            }
        }

        return p3;
    }
    // operater overload  -
    polynomial operator-(polynomial const &p2)
    {
        int total_capacity = max(this->capacity, p2.capacity);
        polynomial p3(total_capacity);

        for (int i = 0; i <= total_capacity; i++)
        {
            if (this->capacity >= i && p2.capacity >= i)
            {
                p3.degCoeff[i] = this->degCoeff[i] - p2.degCoeff[i];
            }
            else if (this->capacity >= i)
            {
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else if (p2.capacity >= i)
            {
                p3.degCoeff[i] = p2.degCoeff[i];
            }
        }

        return p3;
    }
     polynomial operator*(polynomial const &p2){
           int total_capacity= this->capacity+p2.capacity;
             polynomial(p3);
              for( int i=0;i<= this->capacity;i++){
                   for( int j=0;j<= p2.capacity;j++){
                        p3.degCoeff[i+j]+= this->degCoeff[i]* p2.degCoeff[j];
                   }
              }
               return p3;
     }
};
int main()
{
    polynomial p1;
    p1.setCoefficient(1, 0);
    p1.setCoefficient(-2, 1);
    p1.setCoefficient(3, 2);
    p1.setCoefficient(4, 3);
    p1.setCoefficient(-5, 4);
    p1.setCoefficient(6, 5);
    p1.setCoefficient(7, 9);

    polynomial p2(p1);
    p2.setCoefficient(6, 20);
    polynomial p3 = p1 + p2;
    polynomial p4 = p1 - p2;
     polynomial p5 = p1 * p2;
    p1.print();
    p2.print();
    p3.print();
    p4.print();
     p5.print();

    /*
    p1.print();
    polynomial p2(p1);
    p1.setCoefficient(10, 4);
    p1.print();
    p2.print();
    polynomial p3;
    p3 = p1;
    p3.print();
    */
}