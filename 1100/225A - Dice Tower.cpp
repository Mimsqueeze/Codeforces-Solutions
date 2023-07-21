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
    int n, x;
    cin >> n >> x;
    bool possible= true;
    set<int> side;
    forall(i, n) {
        int a, b;
        cin >> a >> b;
        if (a == x || a == 7-x || b == x || b == 7-x) {
            possible= false;
        }
    }
    if (possible) {
        cout << "YES";
    } else {
        cout << "NO";
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