/*
 * Name: Minsi Hu
 * Date: 2/1/23
 * Problem: 313B
 * Difficulty Rating: 1100
 * Start Time: 1:00PM
 * End Time: 1:21PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int m;
    cin >> s >> m;

    int dp[s.length()];
    dp[0] = 0;
    for (int i = 1; i < s.length(); i++) {
        dp[i] = dp[i-1];
        if (s[i-1] == s[i])
            dp[i]++;
    }
    // for (auto x : dp) {
    //     cout << x << " ";
    // }
    // cout << "\n";

    while (m--) {
        int l,r;
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << "\n";
    }
}
