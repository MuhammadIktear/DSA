#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        char arr[n][n];
        vector<int>v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
            for (int i = 0; i < n; i++) {
                int cnt=0;
            for (int j = 0; j < n; j++) {
                if(arr[i][j]=='1')
                cnt++;
            }
            if(cnt>0)
            v.push_back(cnt);
        }
        int flag=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                flag=1;
            }
        }
        if(flag==1)cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
    }

    return 0;
}
