#include<iostream>
using namespace std;
 
int fac( int n)
{
     int fact = 1;
    for ( int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
 int main()
 {
      int n;
      cout<<"Enter the  number:";
      cin>>n;
         for (int i = 0; i <n; i++)
         {
            for (int j = 0; j <=i; j++)
            {
                int result= fac(i)/(fac(j)* fac(i-j));
                 cout<<" "<<result;

            }
             cout<<endl;
         }
         
 }