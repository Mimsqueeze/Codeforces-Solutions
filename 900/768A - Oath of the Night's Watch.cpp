#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
#define     ll              long long
#define     ull             unsigned long long
#define     max2(a,b)       max(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     min2(a,b)       min(a,b)
#define     min3(a,b,c)     min(a,min(b,c))

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int low= v[0];
    int high= v[n-1];
    if (n <= 2 || low == high) {
        cout << 0;
    } else {
        auto a= upper_bound(v.begin(), v.end(), low);
        auto b= lower_bound(v.begin(), v.end(), high) - 1;
        cout << b - a + 1;
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