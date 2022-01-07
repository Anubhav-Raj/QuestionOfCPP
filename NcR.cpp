#include <iostream>
using namespace std;
long int fac(long int n)
{
    long int fact = 1;
    for (long int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void NcR(long int n, long int r)
{ 
    long int fact1 = fac(n);
    long int fact2 = fac(r);
    long int fact3 = fac(n-r);
    long int ncr;
     ncr=fact1/(fact3*fact2);
      cout<<ncr;

}
 int main()
{
    long int n, r;
    cout << "Enter the  N:";
    cin >> n;
    cout << "Enter the R:";
     cin>>r;
    //NcR(n, r);
      long int NCR = fac(n)/(fac(r)* fac(n-r));
       cout<<NCR;
}