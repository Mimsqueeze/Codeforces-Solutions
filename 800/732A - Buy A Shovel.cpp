#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, r;
    cin >> k >> r;
    int n= 1;
    while (((k*n)-r)%10 != 0 && (k*n)%10 != 0) {
        n++;
    }
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i= 1; i <= t; i++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}