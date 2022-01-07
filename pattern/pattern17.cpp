/*

Enter the  N:9
                         A 
                      B  A  B 
                   B  B  A  B  B 
                B  B  B  A  B  B  B 
             B  B  B  B  A  B  B  B  B 
          B  B  B  B  B  A  B  B  B  B  B 
       B  B  B  B  B  B  A  B  B  B  B  B  B       
    B  B  B  B  B  B  B  A  B  B  B  B  B  B  B    
 B  B  B  B  B  B  B  B  A  B  B  B  B  B  B  B  B 

 */
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "Enter the  N:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (i == k)
            {
                cout << " A ";
            }
            else
            {
                cout << " B ";
            }
        }
        cout << endl;
    }
}