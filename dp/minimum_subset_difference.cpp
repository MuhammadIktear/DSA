#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for (int i = 0; i < n; i++) cin >> v[i], s += v[i];

    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++) dp[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            if (v[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    vector<int> allsum;
    for (int i = 0; i <= s; i++) {
        if (dp[n][i] == true) {
            allsum.push_back(i);
        }
    }

    int result = INT_MAX;
    int sz = allsum.size();
    for (int i = 0; i < sz; i++) {
        int x = abs(allsum[i] - (s - allsum[i]));
        result = min(result, x);
    }

    cout << result << endl;
}
