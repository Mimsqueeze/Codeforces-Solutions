#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    string s;
    cin >> s;
    int i= 0;
    int l= 0;
    int r;
    while (s[i++] != '|') {
        l++;
    }
    r= s.size()-l-1;
    int d= abs(l-r);
    string w;
    cin >> w;
    if (w.size() < d || w.size() % 2 != d % 2) {
        cout << "Impossible";
    } else {
        for (int j= 0; j < w.size(); j++) {
            if (l > r) { // place right
                r++;
                s += w[j];
            } else {
                l++;
                s = w[j] + s;
            }
        }
        cout << s;
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