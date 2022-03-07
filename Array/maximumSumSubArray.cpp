#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n)
{
     int res= arr[0];
    int endMax = arr[0];
    for (int i = 1; i < n; i++)
    {
          endMax = max((endMax + arr[i]), arr[i]);
          res =max(res,endMax);
    }
    return res;
}
int main()
{
    // Code Here
    int arr[1000];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    int n = maxSum(arr, size);
    cout << n << endl;
    return 0;
}