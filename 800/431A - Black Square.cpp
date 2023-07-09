#include <bits/stdc++.h>
using namespace std;

void solve() {
    int cal[4];
    cin >> cal[0] >> cal[1] >> cal[2] >> cal[3];
    string s;
    cin >> s;
    int count= 0;
    for (int i= 0; i < s.size(); i++) {
        char c= s[i];
        int j= (c - '0') - 1;
        count += cal[j];
    }
    cout << count;
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