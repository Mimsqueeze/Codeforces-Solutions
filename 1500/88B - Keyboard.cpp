#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define int long long

using namespace std;

long double distance(int x1, int x2, int y1, int y2) {
    int x = x2 - x1;
    int y = y2 - y1;
    return sqrt(x*x + y*y);
}

void solve() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<string> matrix(n);
    vector<pair<int,int>> shift_positions; // row, then column
    map<char, int> dict; // char -> num times use left hand
    for (int i= 0; i < n; i++) {
        cin >> matrix[i];
        for (int j= 0; j < m; j++) {
            if (matrix[i][j] == 'S') {
                shift_positions.emplace_back(i, j);
            } else {
                dict[matrix[i][j]] = 0;
            }
        }
    }

    for (int i= 0; i < n; i++) {
        for (int j= 0; j < m; j++) {
            char letter = matrix[i][j];
            if (letter != 'S') {
                for (auto pos : shift_positions) {
                    long double dist = distance(pos.first, i, pos.second, j);
                    char upper = toupper(letter);
                    if (dist <= x) {
                        dict[upper] = 0;
                    } else if (dict.find(upper) == dict.end()) { // not found
                        dict[upper] = 1;
                    }
                }
            }
        }
    }

    int q;
    string text;
    cin >> q >> text;
    int count = 0;
    for (int i= 0; i < q; i++) {
        char letter = text[i];
        if (dict.find(letter) == dict.end()) { // not found
            cout << "-1";
            return;
        }
        // cout << "For letter " << letter << ": " << dict[letter] << " actions" << endl;
        count += dict[letter];
    }
    cout << count;
}

signed main() {
    fastio
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}