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
    vector<bool> v(n);
    int p;
    cin >> p;
    while (p--) {
        int i;
        cin >> i;
        v[i-1]= true;
    }
    cin >> p;
    while (p--) {
        int i;
        cin >> i;
        v[i-1]= true;
    }
    bool beat= true;
    for (int i= 0; i < n; i++) {
        if (v[i] == false)
            beat= false;
    }
    if (beat) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
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