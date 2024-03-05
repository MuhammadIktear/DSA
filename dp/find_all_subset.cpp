#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> vv;

void find_subset(int n, int arr[], vector<int>& v, int i) {
    if (i == n) {
        vv.push_back(v);
        return;
    }
    v.push_back(arr[i]);
    find_subset(n, arr, v, i + 1);
    v.pop_back();
    find_subset(n, arr, v, i + 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> v;
    find_subset(n, arr, v, 0);
    vv.push_back({});
    
    for (const auto& subset : vv) {
        for (const auto& elem : subset) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
