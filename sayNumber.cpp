#include <iostream>
using namespace std;
void saydigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;
      saydigit(n, arr);
    cout << arr[digit] << " ";

  
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "Four", "Five", "Six", "Seven", "Eight", "nine"};
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    cout << endl<< endl<< endl;
    saydigit(n, arr);
    cout << endl<< endl<<endl;
}