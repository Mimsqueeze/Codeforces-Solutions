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
    int i= 1;
    vector<pair<int,int>> v;
    while (n--) {
        int p;
        cin >> p;
        v.push_back(make_pair(p, i++));
    }
    sort(v.begin(), v.end());
    for (int i= 0; i < v.size(); i++) {
        cout << v[i].second << " ";
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