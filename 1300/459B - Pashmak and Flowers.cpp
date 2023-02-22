/*
 * Name: Minsi Hu
 * Date: 2/20/23
 * Problem: 459B
 * Difficulty Rating: 1300
 * Start Time: 7:37PM
 * End Time: 7:03PM 2/21/23
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    cin >> n;

    int high = 0;
    int high_count = 0;
    int low = INT32_MAX;
    int low_count = 0;

    while (n--) {
        cin >> b;
        if (b == high) {
            high_count++;
        }
        if (b > high) {
            high = b;
            high_count = 1;
        }
        if (b == low) {
            low_count++;
        }
        if (b < low) {
            low = b;
            low_count = 1;
        }
    }

    // if high and low are different, then the formula is just their counts
    // multiplied by each other. Else, the formula is Guass's sum of (count - 1)
    if (high != low) {
        cout << high-low << " " << fixed << ((long long) high_count) * low_count;
    } else {
        long long count = high_count - 1;
        cout << "0 " << (count*(count + 1))/2;
    }

}