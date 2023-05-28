// wrong answer
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    char prev= 0;
    int count= 0;
    int max= 0;
    for (int i= 0; i < n; i++) {
        if (s[i] == prev) {
            count++;
        } else {
            count= 1;
        }
        prev= s[i];
        if (count > max) max = count;
    }
    cout << count+1 << "\n";
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