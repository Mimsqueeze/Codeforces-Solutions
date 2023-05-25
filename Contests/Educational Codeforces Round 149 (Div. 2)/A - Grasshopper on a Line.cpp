#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

void solve() {
    int x, k;
    cin >> x >> k;
    if (x % k == 0) { // x is divisible
        // jump by x - 1
        cout << 2 << "\n" << x - 1 << " " << "1" << "\n";
    } else {
        cout << 1 << "\n" << x << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}