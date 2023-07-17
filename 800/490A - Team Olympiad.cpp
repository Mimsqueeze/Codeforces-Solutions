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
    vector<vector<int>> a(4);
    for (int i = 1; i <= n; i++) {
        int w;
        cin >> w;
        a[w].push_back(i);
    }
    int num_teams= min3(a[1].size(), a[2].size(), a[3].size());
    cout << num_teams << "\n";
    for (int i= 0; i < num_teams; i++) {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i] << "\n";
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