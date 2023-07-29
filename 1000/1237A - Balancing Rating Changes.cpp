#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> r(n);
    int sum= 0;
    for (int i= 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0) {
            r[i]= (v[i]-1)/2;
        } else {
            r[i]= v[i]/2;
        }
        sum += r[i];
    }
    int j= 0;
    while (sum != 0) {
        while (v[j] % 2 == 0) {
            j++;
        }
        r[j++]++;
        sum++;
    }
    for (int i= 0; i < n; i++) {
        cout << r[i] << endl;
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