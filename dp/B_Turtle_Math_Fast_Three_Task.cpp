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
        int a[n];

        int total = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] =a[i]%3;
            total += a[i];
        }
        if (total % 3 == 0)
        {
            cout << 0 << endl;
        }
        
        else if (total % 3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            bool found = false;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                {
                    cout << 1 << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << 2 << endl;
        }
    }

    return 0;
}