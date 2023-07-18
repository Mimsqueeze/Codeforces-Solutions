#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
#define     ll              long long
#define     ull             unsigned long long
#define     max2(a,b)       max(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     min2(a,b)       min(a,b)
#define     min3(a,b,c)     min(a,min(b,ac))

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cities(n);
    for (int i= 0; i < n; i++) {
        cin >> cities[i];
    }
    // for first elt
    int elt= cities[0];
    int min_cost= cities[1] - elt;
    int max_cost= cities[cities.size()-1] - elt;
    cout << min_cost << " " << max_cost << "\n";
    for (int i= 1; i < n-1; i++) {
        elt= cities[i];
        min_cost= min2(elt - cities[i-1], cities[i+1] - elt);
        max_cost= max2(elt - cities[0], cities[cities.size()-1] - elt);
        cout << min_cost << " " << max_cost << "\n";
    }
    elt= cities[cities.size()-1];
    min_cost= elt - cities[cities.size()-2];
    max_cost= elt - cities[0];
    cout << min_cost << " " << max_cost << "\n";
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