/*
 * Name: Minsi Hu
 * Date: 1/27/23
 * Problem: 405A
 * Difficulty Rating: 900
 * Start Time: 2:24PM
 * End Time: 2:29PM
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int box[n];
    for (int i = 0; i < n; i++) {
        cin >> box[i];
    }
    sort(box, box + n);
    for (auto x : box) {
        cout << x << " ";
    }
}