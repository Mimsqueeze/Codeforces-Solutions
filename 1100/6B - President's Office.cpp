#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<string> office(n);
    for (int i= 0; i < n; i++) {
        cin >> office[i];
    }
    set<char> s;
    s.insert(c);
    for (int i= 0; i < n; i++) {
        for (int j= 0; j < m; j++) {
            if (office[i][j] == c) { // check surroundings
                if (i-1 >= 0 && office[i-1][j] != '.') {
                    s.insert(office[i-1][j]);
                }
                if (i+1 < n && office[i+1][j] != '.') {
                    s.insert(office[i+1][j]);
                }
                if (j-1 >= 0 && office[i][j-1] != '.') {
                    s.insert(office[i][j-1]);
                }
                if (j+1 < m && office[i][j+1] != '.') {
                    s.insert(office[i][j+1]);
                }
            }
        }
    }

    cout << s.size()-1;
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