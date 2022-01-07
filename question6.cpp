/*4.Write a Program which accepts coefficients of a
quadratic equation from the user and displays the roots
(both real and complex roots depending upon the
discriminant).*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float d = b * b - 4 * a * c;
    if (d > 0)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Root are real:" << x1 << " " << x2;
    }
    else if (d < 0)
    {
        float x1 = -b / (2 * a);
        float x2 = sqrt(-d) / (2 * a);
        cout << "Root are  imaginary" << x1 << x2 << endl;
    }
    else
    {
        float x1 = (-b) / (2 * a);
        cout << "Real root & same " << x1;
    }
    return 0;
}
