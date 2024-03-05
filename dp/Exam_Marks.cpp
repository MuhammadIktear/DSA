#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int dp[N][N];

bool f(int diff, int n, int arr[]) {
    if (diff == 0) return true;
    if (diff < 0 || n <= 0) return false; 
    if (dp[n][diff] != -1) return dp[n][diff];
    bool op1 = f(diff - arr[n - 1], n - 1, arr); 
    bool op2 = f(diff, n - 1, arr);
    return dp[n][diff] = op1 || op2; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int diff = 1000 - m;
        int arr[n];
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool b = f(diff, n, arr);
        if (b == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
