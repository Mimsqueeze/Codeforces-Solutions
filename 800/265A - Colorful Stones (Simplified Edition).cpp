#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    string t;
    cin >> s >> t;
    int pos= 0; // add 1 after
    for (int i= 0; i < t.size(); i++) {
        if (t[i] == s[pos]) {
            pos++;
        }
    }
    cout << pos + 1;
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