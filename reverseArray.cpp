#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1, 4, 7, 0, 0};

    int s = 3 + 1, e = v.size() - 1;
    s++;
    e--;


for (int i : v)
{
    cout << i << " ";
}
}
