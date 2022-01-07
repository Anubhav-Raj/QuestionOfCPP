/* Program to generate Fibonacci series upto n value is discussed here. Fibonacci series is a series in which each number is the sum of the last two preceding numbers. The first two terms of a Fibonacci series are 0 and 1.*/

#include <iostream>
using namespace std;
int main()
{
    int n, x1 = 0, x2 = 1;
    cin >> n;
    int sum = x1+x2;
    cout<<x1<<endl;
    cout<<x2<<endl;
    while (sum <= n){
         cout<<sum<<endl; 
           x1=x2;
          x2=sum;
           sum=x1+x2;
          
    }
    
}