//Write a Program to Find Largest Number Among Three Numbers entered by users
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the  three number:";
    cin >> a >> b >> c;
    /* method1
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is grater";
        }
        else
        {
            cout << "C  is greater";
        }
    }
    else
    {
        if (c > b)
        {
            cout << "C is greater";
        }
        else
        {
            cout << "B is greater";
        }
    }
    */
    //method 2
    if(a>=b && a>=c)
    {
        cout<<"A is greater";
    }else if(b>=a && b>=c)
    {
        cout<<"B is greater";

    }else{
        cout<<"C is greater";
    }
    
    return 0;
}