// wrong answer
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

void solve() {
    string s;
    cin >> s;
    string ans;
    int l= s.length();
    for (int i= 0; i < l; i++) {
        if (s[i] == '1') {
            ans.push_back('1');
        } else if (s[i] == '0') {
            ans.push_back('0');
        } else {
            char prev= s[i-1];
            char next= s[i+1];
            if (i == 0)
                prev= 0;
            if (i+1 == l)
                next= 1;
            char digit= ((prev == '1') || (next == '1')) ? '1' : '0';
            ans.push_back(digit);
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}