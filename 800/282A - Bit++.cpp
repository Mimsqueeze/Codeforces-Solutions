/*
 * Name: Minsi Hu
 * Date: 1/24/23
 * Problem: 282A
 * Difficulty Rating: 800
 * Start Time: 4:01PM
 * End Time: 4:02PM
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[1] == '+') {
            count++;
        } else {
            count--;
        }
    }
    cout << count;
}