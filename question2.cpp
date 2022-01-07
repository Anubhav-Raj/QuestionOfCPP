//Write a Program to Swap Two Numbers((
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the number 1:";
    cin >> num1;
    cout << "Enter the number 2:";
    cin >> num2;

    cout << "Before swap"<<endl;
    cout << num1<<endl;
    cout << num2<<endl;

   //method (Using Temporary Variable)
    // int  temp = num1;
    // num1 = num2;
    // num2 = temp;

    //method (WithoutUsing Temporary Variable)

    num1= num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout << "After swap"<<endl;
    cout << num1<<endl;
    cout << num2<<endl;
   
// Note: We can also use multiplication and division instead of addition and subtraction.
// However, this won't work if one of the numbers is 0.
// int a = 5, b = 10;
// // using multiplication and division for swapping
// a = a * b; // a = 50
// b = a / b; // b = 5
// a = a / b; // a = 10
}