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
    char c;
    cin >> c >> c;
    set<int> s;

    while (c != '}') {
        if (c >= 'a' && c <= 'z') {
            s.insert(c);
        }
        cin >> c;
    }
    cout << s.size();
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