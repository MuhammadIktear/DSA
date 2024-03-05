#include <bits/stdc++.h>
using namespace std;

int find(string s1, int n, string s2, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (s1[n - 1] == s2[m - 1])
    {
        int f = find(s1, n-1, s2, m-1, dp);
        return dp[n][m] = f + 1;
    }
    else
    {
        int f1 = find(s1, n-1, s2, m, dp);
        int f2 = find(s1, n, s2, m-1, dp);
        return dp[n][m] = max(f1, f2);
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    cout << find(s1, n, s2, m, dp);
    return 0;
}
