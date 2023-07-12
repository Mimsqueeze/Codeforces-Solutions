#include <bits/stdc++.h>
using namespace std;

void solve() {
    int Y, W;
    cin >> Y >> W;
    int m= max(Y, W);
    int num= 6 - m + 1;
    int denom= 6;
    if ((num % 2 == 0) && (denom % 2 == 0)) {
        num/=2;
        denom/=2;
    }
    if ((num % 3 == 0) && (denom % 3 == 0)) {
        num/=3;
        denom/=3;
    }
    cout << num << "/" << denom;

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