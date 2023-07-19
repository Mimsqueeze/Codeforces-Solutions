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
    int n;
    cin >> n;
    int count= 0;
    while (n--) {
        string s;
        cin >> s;
        if (s.compare("Icosahedron") == 0) {
            count += 20;
        } else if (s.compare("Cube") == 0) {
            count += 6;
        } else if (s.compare("Tetrahedron") == 0) {
            count += 4;
        } else if (s.compare("Dodecahedron") == 0) {
            count += 12;
        } else {
            count += 8;
        }
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