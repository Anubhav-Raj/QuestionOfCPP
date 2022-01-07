#include <iostream>
using namespace std;
int main()
{
    int n, sumN = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sumN = sumN + i;
    }
    cout << sumN << endl;
    return 0;
}