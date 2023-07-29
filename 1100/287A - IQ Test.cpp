#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

vector<vector<int>> b(4, vector<int>(4));

bool checkPossible(int x1, int y1, int x2, int y2) {
    int sum= 0;
    for (int i= x1; i <= x2; i++) {
        for (int j= y1; j <= y2; j++) {
            sum += b[i][j];
        }
    }
    return sum != 0;
}
void solve() {
    for (int i= 0; i < 4; i++) {
        for (int j= 0; j < 4; j++) {
            char color;
            cin >> color;
            if (color == '#') {
                b[i][j]= 1;
            } else {
                b[i][j]= -1;
            }
        }
    }
    if (checkPossible(0, 0, 1, 1) || checkPossible(1, 0, 2, 1)
        || checkPossible(2, 0, 3, 1) || checkPossible(0, 1, 1, 2)
        || checkPossible(1, 1, 2, 2) || checkPossible(2, 1, 3, 2)
        || checkPossible(0, 2, 1, 3) || checkPossible(1, 2, 2, 3)
        || checkPossible(2, 2, 3, 3)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
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