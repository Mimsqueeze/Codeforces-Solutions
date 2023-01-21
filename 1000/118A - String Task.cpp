/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 118A
 * Difficulty Rating: 1000
 * Start Time:
 * End Time:
 */

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (!(c == 'A' || c == 'a' ||
            c == 'E' || c == 'e' ||
            c == 'I' || c == 'i' ||
            c == 'O' || c == 'o' ||
            c == 'U' || c == 'u' ||
            c == 'Y' || c == 'y' )) {
            cout << "." << (char)tolower(c);
        }
    }
}