/*
 * Name: Minsi Hu
 * Date: 1/27/23
 * Problem: 25A
 * Difficulty Rating: 1300
 * Start Time: 12:17AM
 * End Time: 12:37AM
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool search; // 0 is even, 1 is odd
    bool found = false;
    bool sample[3]; // 0 is even, 1 is odd
    for (int i = 0; i < 3; i++) {
        int temp;
        cin >> temp;
        sample[i] = temp%2;
    }
    // Special case: one even one odd, look third and return the appropriate index
    if (sample[0] + sample[1] == 1) { // one even one odd
        if (sample[2]) { // third is odd, so return the even one
            if (sample[0]) { // first is odd, return second one
                cout << 2;
            } else {
                cout << 1;
            }
        } else { // third is even, so return the odd one
            if (sample[0]) { // first is odd, return first one
                cout << 1;
            } else {
                cout << 2;
            }
        }
    } else { // General case: first two tells you whether to search for even or odd
        if (sample[0] + sample[1] == 0) { // first two even, search odd
            search = 1;
        } else { // first two odd, search even
            search = 0;
        }
        // special case: check third
        if (sample[2] == search) {
            cout << 3;
        } else {
            int i = 4;
            while (!found) { // loop through rest of elements
                int temp;
                cin >> temp;
                if (temp%2 == search) { // found what searching for, cout index and break
                    cout << i;
                    found = true;
                } else {
                    i++;
                }
            }
        }
    }
}