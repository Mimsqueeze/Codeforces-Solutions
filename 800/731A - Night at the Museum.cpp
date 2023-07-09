#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    char prev= 'a';
    int answer= 0;
    for (int i= 0; i < s.size(); i++) {
        int difference= prev-s[i];
        int rotations= min(min(abs(difference), abs(difference-26)), abs(difference+26));
        answer += rotations;
        prev= s[i];
    }
    cout << answer;
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