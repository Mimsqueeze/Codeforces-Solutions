#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<pair<int, int>> v;
    while (k--) {
        int a, b;
        cin >> a >> b;
        v.emplace_back(a,b);
    }
    sort(v.begin(), v.end());
    while (t--) {
        int i, j;
        cin >> i >> j;
        auto elt= lower_bound(v.begin(), v.end(), make_pair(i,j));
        if (elt->first == i && elt->second == j) {
            cout << "Waste" << endl;
        } else {
            long long offset= elt - v.begin();
            int val= (m*(i-1)+(j-1)-offset)%3;
            switch(val) {
                case 0: cout << "Carrots"<< endl; break;
                case 1: cout << "Kiwis"<< endl; break;
                case 2: cout << "Grapes"<< endl; break;
            }
        }
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