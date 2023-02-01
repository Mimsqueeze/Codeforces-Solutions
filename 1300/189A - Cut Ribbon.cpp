/*
 * Name: Minsi Hu
 * Date: 1/30/23
 * Problem: 189A
 * Difficulty Rating: 1300
 * Start Time: 9:38PM
 * End Time: 7:27PM 1/31/23
 * Thanks to Gary for guiding me through this problem, and explaining dynamic programming! https://github.com/Square-Root-2
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // gather input
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // vector number line
    vector<int> numberLine(n + 1, -1);
    numberLine[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i - a >= 0 && numberLine[i - a] != -1)
            // cout << "traversing " << i-a << " to " << i << "\n";
            numberLine[i] = max(numberLine[i], numberLine[i - a] + 1);
        if (i - b >= 0 && numberLine[i - b] != -1)
            // cout << "traversing " << i-b << " to " << i << "\n";
            numberLine[i] = max(numberLine[i], numberLine[i - b] + 1);
        if (i - c >= 0 && numberLine[i - c] != -1)
            // cout << "traversing " << i-c << " to " << i << "\n";
            numberLine[i] = max(numberLine[i], numberLine[i - c] + 1);
        /*
        for (auto x : dp) {
            cout << x << " ";
        }
        cout << "\n";
         */
    }
    cout << numberLine[n];
}