/*
 * Name: Minsi Hu
 * Date: 1/30/23
 * Problem: 489C
 * Difficulty Rating: 1400
 * Start Time: 12:35AM
 * End Time: 1:33AM
 */

#include <bits/stdc++.h>
using namespace std;

int m, s, leastnines, _remainder;
bool oneprinted, remainderprinted = false;

void output() {
    if (m) {
        if (m > leastnines + 1) { // can add one or zeros, and can
            if (!oneprinted) { // can add one
                cout << 1;
                oneprinted = true;
            } else {
                cout << 0;
            }
        } else if (!remainderprinted) { // add rest of remainder
            if (oneprinted) {
                cout << _remainder - 1;
            } else {
                cout << _remainder;
            }
            remainderprinted = true;
        } else { // print nines
            cout << 9;
        }
        m--;
        output();
        if (leastnines > 0) {
            cout << 9;
            leastnines--;
        } else {
            cout << _remainder;
            _remainder = 0;
        }
    } else { // base case, m reaches 0, so add space and do increasing
        cout << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> s;

    if (s > 0 && ceil((double)s/9) <= m) { // possible
        leastnines = (s-1)/9;
        _remainder = s-leastnines*9;
        output();
    } else if (s == 0 && m == 1) { // edge case
        cout << 0 << " " << 0;
    } else {
        cout << -1 << " " << -1;
    }
}