/*
 * Name: Minsi Hu
 * Date:
 * Problem: 231A
 * Difficulty Rating: 800
 * Start Time:
 * End Time:
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int length = s.length();
        if (length > 10) {
            cout << s.at(0) << length-2 << s.at(length-1) << "\n";
        } else {
            cout << s << "\n";
        }
    }

}