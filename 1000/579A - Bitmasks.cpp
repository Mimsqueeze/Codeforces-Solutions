#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int x;
    cin >> x;
    int n= 0;
    while (x) {
        if (x % 2 != 0) {
            x--;
            n++;
        }
        x/=2;
    }
    cout << n;
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