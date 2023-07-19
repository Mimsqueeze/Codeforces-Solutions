#include <bits/stdc++.h>

#define     ll              long long
#define     ull             unsigned long long
#define     ld              long double
#define     max2(a,b)       max(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     min2(a,b)       min(a,b)
#define     min3(a,b,c)     min(a,min(b,c))
#define     endl            '\n'
#define     forall(i, n)    for (int (i)= 0; (i) < (n); i++)

using namespace std;

void solve() {
    ll l, r;
    cin >> l >> r;
    if (l%2 != 0)
        l++;
    if (r-l < 2) {
        cout << -1;
    } else {
        cout << l << " " << l+1 << " " << l+2;
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(false); cout << fixed;
    int tc = 1;
    // cin >> tc;
    for (int i= 1; i <= tc; i++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}