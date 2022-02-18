#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> &m,
                vector<vector<int>> visited)
    {
    
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y,
               vector<vector<int>> visited, string path)
    {
        //cout << "x = " << x << " y " << y << endl;
        //base case
        if (m[x][y] == 0)
            return;
        if (x == n - 1 && y == n - 1)
        {
            //cout << path << endl;
            ans.push_back(path);
            return;
        }

        //reached at x,y -> so mark visited true
        visited[x][y] = 1;

        //4 moves -> U, D, R, L

        //up
        int newx = x - 1;
        int newy = y;

        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            //backtrack
            path.pop_back();
        }

        //down
        newx = x + 1;
        newy = y;

        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            //backtrack
            path.pop_back();
        }

        //Left
        newx = x;
        newy = y - 1;

        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            //backtrack
            path.pop_back();
        }

        //right
        newx = x;
        newy = y + 1;

        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            //backtrack
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited = m;

        //initialise with 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";

        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends