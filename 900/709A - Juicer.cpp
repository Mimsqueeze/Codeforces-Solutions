#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, b, d;
    cin >> n >> b >> d;
    int times= 0;
    int total= 0;
    while (n--) {
        int a;
        cin >> a;
        if (a <= b) {
            total += a;
            if (total > d) {
                total= 0;
                times++;
            }
        }
    }
    cout << times;
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