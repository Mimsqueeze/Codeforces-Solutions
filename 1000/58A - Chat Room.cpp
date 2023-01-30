/*
 * Name: Minsi Hu
 * Date: 1/30/23
 * Problem: 58A
 * Difficulty Rating: 58A
 * Start Time: 1:48PM
 * End Time: 2:39PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    char hello[] = {'h', 'e', 'l', 'l', 'o'};
    int C = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == hello[C]) { // char found, try to find next one
            C++;
        }
        if (C == 5) {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}