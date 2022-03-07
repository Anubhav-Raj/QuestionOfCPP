#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    long long trappingWater(int arr[], int n)
    {
        

        long long res = 0;
        int lmax[n], rmax[n];
        lmax[0] = arr[0];

        // left max
        for (int j = 1; j < n; j++)
        {
            lmax[j] = max(lmax[j - 1], arr[j]);
        }

        // Right max
        rmax[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; j--)
        {
            rmax[j] = max(rmax[j + 1], arr[j]);
        }

        for (int i = 1; i < n - 1; i++)
        {
            res += min(lmax[i], rmax[i]) - arr[i];
        }
        return res;
    }
};

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
} 