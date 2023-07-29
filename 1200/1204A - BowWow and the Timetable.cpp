#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    string s;
    cin >> s;
    int digits= s.size()-1;
    bool allZeros= true;
    for (int i= 1; i < s.size() && allZeros; i++) {
        if (s[i] != '0')
            allZeros= false;
    }
    if (allZeros && digits % 2 == 0) {
        cout << digits/2;
    } else {
        cout << digits/2 + 1;
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