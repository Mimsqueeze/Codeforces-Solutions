#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i= 0; i < n; i++) {
        cin >> cards[i];
    }

    bool a_turn= true;
    int a_score= 0;
    int b_score= 0;
    int l= 0, r= n-1;

    while (l <= r) {
        int value;
        if (cards[l] > cards[r]) {
            value= cards[l++];
        } else {
            value= cards[r--];
        }
        if (a_turn) {
            a_score += value;
        } else {
            b_score += value;
        }
        a_turn= !a_turn;
    }
    cout << a_score << " " << b_score;
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
