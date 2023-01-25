/*
 * Name: Minsi Hu
 * Date: 1/25/23
 * Problem: 263A
 * Difficulty Rating: 800
 * Start Time: 1:00PM
 * End Time: 1:05PM
 */

#include <iostream>
using namespace std;

int main() {
    bool found = false;
    int row = 1;
    int col = 1;
    while (!found) {
        int n; // value of the cell
        cin >> n; // storing value in n

        if (n) { // if value is 1
            found = true; // breaks out of loop, saves the row and col of value
        } else { // value is 0, change row and col
            if (col == 5) {
                row++;
                col = 1;
            } else {
                col++;
            }
        }
    }

    int ans = abs(row-3) + abs(col-3);
    cout << ans;
}