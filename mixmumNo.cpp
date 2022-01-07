#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is Grater" << endl;
        }
        else
        {
            cout << "c is Grater" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is Grater" << endl;
        }
        else
        {
            cout << "c is Grater" << endl;
        }
    }

    return 0;
}