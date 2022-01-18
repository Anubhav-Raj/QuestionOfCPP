#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the a: ";
    int a, b;
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;
     int power=1;
     for (int i = 0; i < b; i++)
     {
          power= power*a;
     }
      cout<<"Power is "<<power<<endl;
     
}