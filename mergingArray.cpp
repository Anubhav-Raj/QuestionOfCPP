#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int n1;
    cout << "Enter the number: ";
    cin >> n1;
    int arr1[n1];
    for (int j = 0; j < n1; j++)
    {
        cin >> arr1[j];
    }

    int n3 = n + n1;
    int arr3[n3];

    for (int l = 0; l < n; l++)
    {
        arr3[l] = arr[l];
    }

    int len = (sizeof(arr3) / sizeof(*arr3));
    int x = 0;
    while (n != len)
    {
        arr3[n] = arr1[x];
        x++;
        n++;
    }

    for (int y = 0; y < n3 - 1; y++)
    {
        int flag = 0;
        for (int k = 0; k < n3 - 1 - y; k++)
        {
            if (arr3[k] > arr3[k + 1])
            {
                int temp = arr3[k];
                arr3[k] = arr3[k + 1];
                arr3[k + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    cout << "After Merging : [ ";
    for (int p = 0; p < n3; p++)
    {
        cout << arr3[p] << " ";
    }
    cout << " ]";
    return 0;
}