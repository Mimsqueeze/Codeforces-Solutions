/*
 * Name: Minsi Hu
 * Date: 1/22/23
 * Problem: 270A
 * Difficulty Rating: 1100
 * Start Time: 9:03PM
 * End Time: 9:23PM
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int d;
        cin >> d;
        if (360%(180-d))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}