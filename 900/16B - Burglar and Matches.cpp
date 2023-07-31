#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> v(m);
    for (int i= 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[i]= make_pair(a, b);
    }
    sort(v.begin(), v.end(), [&](auto i, auto j) {
        return (i.second > j.second);
    });
    int ans= 0;
    for (int i= 0; i < m && n; i++) {
        while (n && v[i].first) {
            ans += v[i].second;
            n--;
            v[i].first--;
        }
    }
    cout << ans;
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