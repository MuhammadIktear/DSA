#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
bool dp[N][N];
bool subset_sum(int n, int arr[], int target) {
    if (n == 0) {
        return target == 0;
    }
    if(dp[n][target]!=false)return true;
    if (arr[n - 1] <= target) {
        bool op1 = subset_sum(n - 1, arr, target - arr[n - 1]);
        bool op2 = subset_sum(n - 1, arr, target);
        dp[n][target]=op1 || op2;
        return dp[n][target];
    } else {
        return subset_sum(n - 1, arr, target);
    }
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=false;
        }
    }
    bool result = subset_sum(n, arr, target);
    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    delete[] arr;
    return 0;
}
