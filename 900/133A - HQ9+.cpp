/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 133A
 * Difficulty Rating: 900
 * Start Time:
 * End Time:
 */

#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;
    bool yes = false;
    for (int i = 0; i < p.length(); i++) {
        char c = p[i];
        if (c == 'H' || c == 'Q' || c == '9') {
            yes = true;
            break;
        }
    }
    if (yes) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}