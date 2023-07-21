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
    ll n, m;
    cin >> n >> m;
    if (n > m) {
        ll temp= n;
        n = m;
        m= temp;
    }
    vector<ll> arr(5);
    arr[0]= m / 5;
    arr[1]= (m+1) / 5;
    arr[2]= (m+2) / 5;
    arr[3]= (m+3) / 5;
    arr[4]= (m+4) / 5;
    ll count= 0;
    for (ll i= 1; i <= n; i++) {
        count += arr[i%5];
    }
    cout << count;
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