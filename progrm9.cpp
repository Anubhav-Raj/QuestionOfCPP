/* Write a Program to Find GCD or HCF of two numbers entered by user */
#include <iostream>
using namespace std;
int main()
{
    int a, b,H;
    cin >> a >> b;
    for ( H = a < b ? a : b; H >= 1; H--)
    {
        if (a % H == 0 && b % H == 0){
            break;
        }
    }
    cout << H << endl;
}
/*
HCF 👍 Higest comman factor =>
 a=4 b=6;
  a   b
  1   1  ->one factor
  2   2 --> one factor but H higest  comman factor is 2;
  4   3
      6
*/
/*
#include <iostream>
using namespace std;

int main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int a, b, i;
      cin >> a >> b;
      for (i = a < b ? a : b; i >= 1; --i)
	{
	  if (a % i == 0 && b % i == 0)
	    {
	      break;

	    }
	}
      cout << i<<" ";
      int j;
      for (j = a > b ? a : b; j <= (a * b); j++)
	{
	  if (j % a == 0 && j % b == 0)
	    {
	      break;
	    }
	}
      cout << j<<endl;
     
    }
  return 0;
}


