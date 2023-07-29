#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int l= -1, r= INT32_MAX; // rightmost L, leftmost R
    for (int i= 0; i < s.size(); i++) {
        if (s[i] == 'L') {
            l = max(i, l);
        } else if (s[i] == 'R') {
            r = min(i, r);
        }
    }
    int start, end;
    // both exist
    if (l != -1 && r != INT32_MAX) {
        start= r;
        int i;
        for (i= r; s[i] != 'L'; i++);
        end= i-1;
    } else if (l != -1) {
        start= l;
        int i;
        for (i= l; s[i] != '.'; i--);
        end= i;
    } else {
        start= r;
        int i;
        for (i= r; s[i] != '.'; i++);
        end= i;
    }
    cout << start+1 << " " << end+1;
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