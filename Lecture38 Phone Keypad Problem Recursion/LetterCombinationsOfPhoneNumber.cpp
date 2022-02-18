#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution
{
private:
    void solve(string digit, vector<string> &ans, string output, int index, string mapping[])
    {
        //base case
        if (index >= digit.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digit, ans, output, index + 1, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> possibleWords(int a[], int N)
    {
        string digits;

        for (int i = 0; i < N; i++)
        {
            digits += (a[i] + '0');
        }

        vector<string> ans;
        if (digits.length() == 0)
            return ans;

        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, ans, output, index, mapping);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{

    int T;

    cin >> T; //testcases

    while (T--)
    { //while testcases exist
        int N;

        cin >> N; //input size of array

        int a[N]; //declare the array

        for (int i = 0; i < N; i++)
        {
            cin >> a[i]; //input the elements of array that are keys to be pressed
        }

        Solution obj;

        vector<string> res = obj.possibleWords(a, N);
        for (string i : res)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}