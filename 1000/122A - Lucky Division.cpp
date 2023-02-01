/*
 * Name: Minsi Hu
 * Date: 1/31/23
 * Problem: 122A
 * Difficulty Rating: 1000
 * Start Time: 7:28PM
 * End Time: 7:36PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; // [1,1000]
    cin >> n;
    int luckyNumbers[] {4,7,47,74,444,777,447,474,744,477,747,774};
    for (int i = 0; i < 11; i++) {
        if (n%luckyNumbers[i] == 0) {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}