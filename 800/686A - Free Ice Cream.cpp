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
    ll n,x;
    cin >> n >> x;
    int distress= 0;
    while (n--) {
        char c;
        int packs;
        cin >> c >> packs;
        if (c == '+') {
            x += packs;
        } else {
            if (x >= packs) {
                x -= packs;
            } else {
                distress++;
            }
        }
    }
    cout << x << " " << distress;
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