#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }
    int m;
    cin >> m;
    for (int i= 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; // convert to index
        int num= v[x]; // birds on the xth wire
        int left= y - 1; // birds left of the one shot
        int right= num - y; // birds right of the one shot
        if (x-1 >= 0) { // left go up
            v[x-1] += left;
        }
        if (x+1 < n) { // right go down
            v[x+1] += right;
        }
        v[x]= 0;
    }
    for (int i= 0; i < n; i++) {
        cout << v[i] << "\n";
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