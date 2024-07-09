#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define int long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] + arr[i+1] > arr[i+2]) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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

