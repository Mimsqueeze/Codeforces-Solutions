#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int num_upper= 0;
    int num_lower= 0;
    for (int i= 0; i < s.size(); i++) {
        if ((int)s[i] < 97) {
            num_upper++;
        } else {
            num_lower++;
        }
    }
    if (num_lower >= num_upper) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s;
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