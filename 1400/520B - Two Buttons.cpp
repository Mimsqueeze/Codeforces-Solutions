/*
 * Name: Minsi Hu
 * Date: 1/30/23
 * Problem: 520b
 * Difficulty Rating: 1400
 * Start Time: 12:14PM
 * End Time: 1:44PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int buttonPresses = 0;
    if (n >= m) { // if n is greater, then the answer is the difference
        cout << n - m;
        exit(0);
    }
    while (n < m) { // breaks when n is greater than or equal to mc
        int a = n; // path A, times 2
        int b = n - 1; // path B, minus 1
        while (a < m && b < m) { // while either are less, breaks when both are greater or equal, or one is
            a *= 2; // multiply by 2
            b *= 2; // multiply by 2
        }
        if (a >= m && b < m) // path A is better
            n *= 2;
        else // both are greater so b is better
            n--;
        buttonPresses++;
    }
    buttonPresses += n - m;
    cout << buttonPresses;
    return(0);
}