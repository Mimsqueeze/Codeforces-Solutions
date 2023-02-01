/*
 * Name: Minsi Hu
 * Date: 1/31/23
 * Problem: 279B
 * Difficulty Rating: 1400
 * Start Time: 7:41PM
 * End Time: 12:31AM (2/1/23)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; // get inputs
    cin >> n >> t;

    int books[n + 1]; // array of inputs
    for (int i = 1; i <= n; i++) {
        cin >> books[i];
    }

    int numbooks = 0;
    // double pointer
    int a = 1, b = 1; // both start pointing to the first book
    books[0] = books[1]; // stores the current sum
    while (b <= n) {
        // cout << a << " " << b << " " << books[0] << "\n";
        bool slideB = false;
        bool slideA = false;
        if (books[0] <= t) { // less than or equal to t, increment b to try include next book
            // cout << "tries to save!" << "\n";
            numbooks = max(numbooks,b-a+1);
            b++; // increment b
            slideB = true;
            if (books[0] == t) { // equal to t, also increment a to slide the window
                a++; // increment a
                slideA = true;
            }
        } else { // greater than t, slide a
            a++;
            slideA = true;
        }
        if (slideA)
            books[0] -= books[a-1];
        if (slideB)
            books[0] += books[b];
    }
    cout << numbooks;
}