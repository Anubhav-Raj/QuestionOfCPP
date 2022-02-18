#include <bits/stdc++.h>
#include "Complex.cpp"
using namespace std;
int main()
{
    // Code Here
    cout << "\t Enter the Operation Number \t" << endl;
    cout << "   1.Addination   " << endl;
    cout << "   2.Multiplication   " << endl;
    cout << "Enter the Choice (1-2):" << endl;
    int choice;
    cin >> choice;

    cout << "Enter two Complex Number :" << endl;
    int real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1;
    cout << endl;
    cin >> real2 >> imaginary2;
    cout << endl;
    Complex c1(real1, imaginary1);
    Complex c2(real2, imaginary2);

    if (choice == 1)
    {
        c1.add(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.mul(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}