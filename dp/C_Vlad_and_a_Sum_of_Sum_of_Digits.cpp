#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll digitSum(ll x) {
    ll sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll sum = 0;
        for (ll i = 1; i <= n; i++) {
            sum += digitSum(i);
        }
        cout << sum << endl;
    }
    return 0;
}
