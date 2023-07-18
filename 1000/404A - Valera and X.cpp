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
    vector<string> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }
    bool diagX= true;
    char diagChar= v[0][0];
    bool nonDiagX= true;
    char nonDiagChar= v[0][1];

    for (int i= 0; i < n; i++) {
        for (int j= 0; j < n; j++) {
            char temp= v[i][j];
            if ((i+j == n-1) || (i == j)) { // diag
                if (temp != diagChar) {
                    diagX= false;
                }
            } else {
                if (temp != nonDiagChar) {
                    nonDiagX= false;
                }
            }
        }
    }
    if (nonDiagX && diagX && (diagChar != nonDiagChar)) {
        cout << "YES";
    } else {
        cout << "NO";
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