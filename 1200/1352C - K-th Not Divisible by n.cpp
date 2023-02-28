/*
 * Name: Minsi Hu
 * Date: 2/27/23
 * Problem: 1352C
 * Difficulty Rating: 1200
 * Start Time: 7:05PM
 * End Time: 7:28PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        unsigned int remainder = k % (n-1);
        unsigned long long n2 = ((unsigned long long)n)*(k/(n-1));
        if (remainder == 0) {
            n2--;
        } else {
            n2 += remainder;
        }
        cout << n2 << "\n";
    }

    return 0;
}