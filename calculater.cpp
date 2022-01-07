#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operater;
    cout << "Enter the Num1:"<<endl;
    cin >>num1;
    cout << "Enter the the operation what you wnat to preform: "<<endl;
    cin >>operater;
    cout << "Enter the  Num2:"<<endl;
    cin >>num2;
  switch (operater)
    {
    case '+':
        cout << "Sum is " << num1 + num2;
        break;
    case '-':
    cout << "sub is " << num1 - num2;
        break;
    case '*':

        cout << "mul is " << num1 * num2;
        break;
    case '/':

        cout << "div is " << num1 / num2;
        break;
    case '%':

        cout << "modulo is " << num1 % num2;
        break;
    default:
        cout << "Input invalid...";
        break;
    } 
     return 0;
}