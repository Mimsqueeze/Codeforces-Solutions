#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    string s;
    cin >> s;

    for (int i= 0; i < s.size(); i++) {
        if (s[i] == '9' && i == 0) {
            continue;
        }
        if (s[i] >= '5') {
            s[i]= '9'-(s[i]-'0');
        }
    }
    cout << s;

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