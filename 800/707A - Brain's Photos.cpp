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
    int n, m;
    cin >> n >> m;
    int total= n*m;
    bool bw= true;
    for (int i= 0; i < total; i++) {
        char c;
        cin >> c;
        if (c != 'W' && c != 'B' && c != 'G') {
            bw= false;
            break;
        }
    }
    if (bw)
        cout << "#Black&White";
    else
        cout << "#Color";
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