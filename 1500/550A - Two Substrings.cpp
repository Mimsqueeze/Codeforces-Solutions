/*
 * Name: Minsi Hu
 * Date: 5/13/23
 * Problem: 550A
 * Difficulty Rating: 1500
 * Start Time: 8:40PM
 * End Time: 9:09PM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool ans= false;
    int ab= s.find("AB"); // get position of first AB
    int ba= s.find("BA"); // get position of first BA

    if (ab != -1 && ba != -1) { // both exist in the string
        if (abs(ab - ba) > 1) { // both are at least one away (not overlapping)
            ans = true;
        } else { // they are overlapping, find another
            int new_ab= ab, new_ba= ba;
            while ((new_ab= s.find("AB", new_ab + 1)) != -1) {
                if (abs(new_ab - ba) > 1) {
                    ans = true;
                    break;
                }
            }
            if (!ans) {
                while ((new_ba= s.find("BA", new_ba + 1)) != -1) {
                    if (abs(new_ba - ab) > 1) {
                        ans = true;
                        break;
                    }
                }
            }
        }
    }

    if (ans) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}