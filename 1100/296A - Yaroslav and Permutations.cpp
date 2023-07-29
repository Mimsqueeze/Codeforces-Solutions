#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i= 0; i < n; i++) {
        int a;
        cin >> a;
        m[a]++;
    }
    int max_elt= 0;
    for (auto x : m) {
        max_elt= max(x.second, max_elt);
    }
    if (max_elt*2-1 > n) {
        cout << "NO";
    } else {
        cout << "YES";
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