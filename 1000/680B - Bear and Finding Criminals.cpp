#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, a;
    cin >> n >> a;
    vector<bool> v(n+1);
    int sum= 0;
    for (int i= 1; i <= n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
        v[i]= temp;
    }
    // Subtract out when only 1 city with d distance has a criminal
    for (int d= 1; d <= n-a && d < a; d++) {
        int l= a-d;
        int r= a+d;
        if (v[l] != v[r]) {
            sum--;
        }
    }
    cout << sum;
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