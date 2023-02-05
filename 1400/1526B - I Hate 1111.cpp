/*
 * Name: Minsi Hu
 * Date: 2/4/23
 * Problem: 1526B
 * Difficulty Rating: 1400
 * Start Time: 10:56AM
 * End Time: 1:00PM 2/5/23
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int j = 11;
    const int k = 111;

    int t;
    cin >> t;
    bool can[1100]{false};
    can[0] = true;
    for (int i = 0; i < 1100; i++) {
        if (can[i]) { // if number can be created
            if (i + j < 1100)
                can[i+j] = true;
            if (i + k < 1100)
                can[i+k] = true;
        }
    }

    /*
    for (int i = 0; i < 1100; i++) {
        if (can[i] == false) // cant make it
            cout << i << " ";
    }
    */
    while (t--) {
        int x;
        cin >> x;
        if (x < 1100 && !can[x]) // if less than 1100 and cannot create x
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}