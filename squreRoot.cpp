#include <iostream>
using namespace std;
int intgerSqrt(int N)
{
    int start = 0, end = N, ans = -1;
    while (start <= end){
        long long int mid = start + (end - start) / 2;
        if ((mid * mid) > N){
            end = mid - 1;
        }
        else if ((mid * mid) < N){
            ans = mid;
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return ans;
}
double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor /10;
        for (double j = ans; j * j < n; j=j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int tempsol = intgerSqrt(n);
    cout << "Answer is: " <<morePrecision(n,3,tempsol);
}