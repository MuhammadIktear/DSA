#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        long long r = 0;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            r += abs(a[i]);
        }

        cout << r << endl;
    }

    return 0;
}
