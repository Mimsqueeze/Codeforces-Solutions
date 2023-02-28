/*
 * Name: Minsi Hu
 * Date: 2/27/23
 * Problem: 474B
 * Difficulty Rating: 1200
 * Start Time: 7:33PM
 * End Time: 7:48PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_piles, a;
    cin >> num_piles;

    int bs[num_piles+1];
    bs[0] = 0;

    for (int i = 1; i <= num_piles; i++) {
        cin >> a;
        bs[i] = a + bs[i-1];
    }

    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;
        // find first array element where the prev value is < and current val is >=
        int pile = lower_bound(bs, bs + num_piles, q) - bs;
        cout << pile << "\n";
    }

    return 0;
}