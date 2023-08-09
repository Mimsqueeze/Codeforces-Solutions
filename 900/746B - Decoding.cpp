#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans= s;
    int median= n/2;
    int j= 0;
    if (n % 2 == 0) { // even
        for (int i= 0; i < median; i++) {
            ans[median-i-1]= s[j++];
            ans[median+i]= s[j++];
        }
    } else {
        for (int i= 0; i < median; i++) {
            ans[median+i]= s[j++];
            ans[median-i-1]= s[j++];
        }
        ans[n-1]= s[j++];
    }
    cout << ans;
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