#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s= "ROYGBIV";
    string ans= "";
    for (int i= 0; i < n-3; i++) {
        ans += s[i%4];
    }
    for (int i= 0; i < 3; i++) {
        ans += s[4+i];
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