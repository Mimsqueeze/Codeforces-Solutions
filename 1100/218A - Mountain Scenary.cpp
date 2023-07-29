#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(2*n+1);
    for (int i= 0; i < 2*n+1; i++) {
        cin >> v[i];
    }
    cout << v[0] << " ";
    for (int i = 1; i < 2*n; i++) {
        int y= v[i];
        if (i%2 != 0 && k && y-1 > v[i-1] && y-1 > v[i+1]) {
            cout << y-1;
            k--;
        } else {
            cout << y;
        }
        cout << " ";
    }
    cout << v[2*n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}