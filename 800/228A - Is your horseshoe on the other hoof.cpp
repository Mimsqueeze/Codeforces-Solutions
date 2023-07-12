#include <bits/stdc++.h>
using namespace std;

void solve() {
    set<int> s;
    int count= 0;
    for (int i= 0; i < 4; i++) {
        int temp;
        cin >> temp;
        if(s.count(temp)) {
            count++;
        }
        s.insert(temp);
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