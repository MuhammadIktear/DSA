#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum % 2 == 1)
            cout << "NO" << endl;
        else
        {
            bool dp[n + 1][sum / 2 + 1];

            for (int i = 0; i <= sum / 2; i++)
                dp[0][i] = false;
             dp[0][0] = true;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= sum / 2; j++)
                {
                    if (arr[i - 1] <= j)
                        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }

            if (dp[n][sum / 2] == true)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
