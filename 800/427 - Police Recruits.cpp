#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int officers= 0;
    int count= 0;
    while (n--) {
        int temp;
        cin >> temp;
        if (temp == -1) { // crime
            if (officers == 0) {
                count++;
            } else {
                officers--;
            }
        } else {
            officers += temp;
        }
    }
    cout << count;
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