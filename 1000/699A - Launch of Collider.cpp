#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int min_dist= INT32_MAX;
    vector<int> p(n);
    for (int i= 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i= 0; i < n-1; i++) {
        if (s[i] == 'R' && s[i+1] == 'L') {
            min_dist= min(min_dist, p[i+1] - p[i]);
        }
    }
    if (min_dist == INT32_MAX) {
        cout << -1;
    } else {
        cout << min_dist/2;
    }
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