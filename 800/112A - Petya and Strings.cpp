/*
 * Name: Minsi Hu
 * Date: 1/26/23
 * Problem: 112A
 * Difficulty Rating: 800
 * Start Time: 4:58PM
 * End Time: 5:28PM
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int a_val = 0;
    int b_val = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] > 90) { // lowercase
            // cout << a[i] << " is " << (int)a[i] << endl;
            a_val += a[i];
        } else { // uppercase
            // cout << a[i] << " is " << (int)a[i] << endl;
            a_val += a[i] + 32;
        }

        if (b[i] > 90) { // lowercase
            // cout << b[i] << " is " << (int)b[i] << endl;
            b_val += b[i];
        } else { // uppercase
            // cout << b[i] << " is " << (int)b[i] << endl;
            b_val += b[i] + 32;
        }

        if (a_val > b_val) {
            cout << 1;
            break;
        } else if (b_val > a_val) {
            cout << -1;
            break;
        }
    }
    if (a_val == b_val) {
        cout << 0;
    }
}