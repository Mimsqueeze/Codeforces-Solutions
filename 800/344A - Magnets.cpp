#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string prev; // 0 for 10, 1 for 01
    cin >> prev;
    int groups= 1;
    n--;
    while (n--) {
        string s;
        cin >> s;
        if (s != prev) {
            groups++;
        }
        prev= s;
    }
    cout << groups;
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