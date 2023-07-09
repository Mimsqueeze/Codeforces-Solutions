#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    set<char> set;
    for (int i= 0; i < s.size(); i++) {
        set.insert(s[i]);
    }
    int num= 0;
    for (auto x : set) {
        num++;
    }
    if (num % 2 == 0) { // girl
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
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