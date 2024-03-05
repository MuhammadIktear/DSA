#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll n = 1e6 + 5;
bool prime[n + 1];

int main()
{
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    ll m;
    cin >> m;

    for (ll i = 0; i < m; i++) {
        ll a;
        cin >> a;
        ll sq = sqrt(a);
        if (a == 1) {
            cout << "NO" << endl;
        } else if (sq * sq == a && prime[sq]) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
