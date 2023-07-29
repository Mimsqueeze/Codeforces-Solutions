#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int total_score= 0;
    for (int i= 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        int score= r-l+1;
        total_score += score;
    }
    int remainder= total_score % k;
    if (remainder == 0) {
        cout << 0;
    } else {
        cout << k - remainder;
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