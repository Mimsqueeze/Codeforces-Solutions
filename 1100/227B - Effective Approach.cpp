#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> map; // elt to index
    for (int i= 0; i < n; i++) {
        cin >> arr[i];
        map[arr[i]]= i;
    }
    long long forward= 0;
    long long backward= 0;
    int m;
    cin >> m;
    while (m--) {
        int b;
        cin >> b;
        int index= map[b];
        forward += index+1;
        backward += n-index;
    }
    cout << forward << " " << backward;
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