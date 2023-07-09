#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h;
    cin >> n >> h;
    int width= 0;
    while (n--) {
        int a;
        cin >> a;
        if (a <= h) {
            width++;
        } else {
            width+=2;
        }
    }
    cout << width;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i= 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}