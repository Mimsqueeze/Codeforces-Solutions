/*
 * Name: Minsi Hu
 * Date: 2/20/23
 * Problem: 479A
 * Difficulty Rating: 1000
 * Start Time: 10:30
 * End Time: 11:00
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int brute1 = ((a * b) + c);
    int brute2 = ((a + b) * c);
    int brute3 = (a + (b * c));
    int brute4 = (a * (b + c));
    int brute5 = (a * b * c);
    int brute6 = (a + b + c);

    cout << max(brute6,max(brute5,max(brute4,max(brute3,max(brute1, brute2)))));

    return 0;
}