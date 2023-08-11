#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int n, f;
    cin >> n >> f;
    priority_queue<long long> pq;
    long long sum= 0;
    for (int i= 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        sum += min(k, l);
        pq.push(min(2*k, l)-min(k, l));
    }
    for (int i= 0; i < f; i++) {
        sum += pq.top();
        pq.pop();
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