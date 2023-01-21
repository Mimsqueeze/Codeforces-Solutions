/*
 * Name: Minsi Hu
 * Date: 1/19/23
 * Problem: 96A
 * Difficulty Rating: 900
 * Start Time:
 * End Time:
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool team = s[0] == '1';
    int n = 1;
    bool result = 0;
    for (int i = 1; i < s.length(); i++) {
        bool c = (s[i] == '1');
        if ((team && c) || (!team && !c)) {
            n++;
        } else {
            team = c;
            n = 1;
        }

        if (n == 7) {
            result = 1;
        }
    }

    if (result) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}