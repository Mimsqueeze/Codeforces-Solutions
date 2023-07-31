#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

int flood(vector<int>& v, int i, int h, int d) {
    if (i < 0 || i >= v.size() || v[i] > h) {
        return 0;
    }
    if (d == 0) {
        return 1 + flood(v, i-1, v[i], -1) + flood(v, i+1, v[i], 1);
    }
    if (d == 1) {
        return 1 + flood(v, i+1, v[i], 1);
    }
    if (d == -1) {
        return 1 + flood(v, i-1, v[i], -1);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }
    int m= -1;
    for (int i= 0; i < n; i++) {
        m= max(m, flood(v, i, v[i], 0));
    }
    cout << m;
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