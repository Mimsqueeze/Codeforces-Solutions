/*
 * Name: Minsi Hu
 * Date: 3/3/23
 * Problem: 327A
 * Difficulty Rating: 1200
 * Start Time: 12:30PM
 * End Time: 12:39PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned short n;
    cin >> n;

    unsigned short a[n+1];
    unsigned short num = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            num++;
        }
    }

    // play the game
    unsigned short max = 0;
    unsigned short curr = 0;
    for (int j = 1; j <= n; j++) {
        if (a[j] == 0) { // can be flipped, increase curr
            curr++;
            if (curr > max) { // adjust max if curr is greater
                max = curr;
            }
        } else { // cannot be flipped, decrease curr. if already 0, keep at 0.
            if (curr > 0) {
                curr--;
            }
        }
    }
    // edge case, if all numbers are 1, then only flip 1
    if (num == n) {
        cout << num-1;
    } else {
        cout << num + max;
    }
    return 0;
}