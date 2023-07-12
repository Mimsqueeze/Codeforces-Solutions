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
    int arr[4]= {};
    string s;
    cin >> s;
    for (auto x : s) {
        if (x != '+') {
            arr[x - '0']++;
        }
    }
    string ans;
    for (int i= 1; i <= 3; i++) {
        for (int j= 0; j < arr[i]; j++) {
            ans += to_string(i);
            ans += '+';
        }
    }
    cout << ans.substr(0, ans.size()-1);
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