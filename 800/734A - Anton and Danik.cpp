#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int countA= 0;
    int countB= 0;
    string s;
    cin >> s;
    for (int i= 0; i < n; i++) {
        if (s[i] == 'A')
            countA++;
        else
            countB++;

    }
    if (countA == countB) {
        cout << "Friendship";
    } else if (countA > countB) {
        cout << "Anton";
    } else {
        cout << "Danik";
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