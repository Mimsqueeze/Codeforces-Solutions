#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

void solve() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int sum= r1+r2+c1+c2+d1+d2;
    if (sum % 3 != 0) {
        cout << -1;
    } else {
        int a= 1, b, c, d;
        bool found= false;
        while (!found && a < 10) {
            c= c1-a;
            b= d2-c;
            d= d1-a;
            if (c != b && b != d && d != c &&
                c != a && b != a && d != a &&
                c > 0 && b > 0 && d > 0 &&
                c < 10 && b < 10 && d < 10 &&
                a + d == d1 && b + c == d2 && a + c == c1 &&
                b + d == c2 && a + b == r1 && c + d == r2 &&
                a+b+c+d == sum/3) {
                found= true;
                cout << a << " " << b << endl << c << " " << d << endl;
            } else {
                a++;
            }
        }
        if (!found) {
            cout << -1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}