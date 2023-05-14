/*
 * Name: Minsi Hu
 * Date: 5/13/23
 * Problem: 550A
 * Difficulty Rating: 1500
 * Start Time: 9:24PM
 * End Time: 10:21PM
 */

#include <bits/stdc++.h>

using namespace std;

string number;
int ans;

bool div2(int i);
bool div4(int i, int a);
bool div8(int i, int a);

bool div2(int i) {
    bool found= false;
    while (i >= 0 && !found) {
        int m= number[i] - '0';
        if ((m % 2) == 0) { // divisible by 2
            // cout << "2 checking " << m << " with i = " << i << "\n";
            found= div4(i - 1, m);
        }
        i--;
    }
    return found;
}

bool div4(int i, int a) {
    bool found= false;
    if ((a % 8) == 0) {
        found= true;
        ans= a;
    }

    while (i >= 0 && !found) {
        int m= ((number[i] - '0')*10) + a;
        if ((m % 4) == 0) { // divisible by 4
            // cout << "4 checking " << m << " with i = " << i << "\n";
            found= div8(i - 1, m);
        }
        i--;
    }
    return found;
}

bool div8(int i, int a) {
    bool found= false;
    if ((a % 8) == 0) {
        found= true;
        ans= a;
    }

    while (i >= 0 && !found) {

        int m= ((number[i] - '0')*100) + a;
        // cout << "8 checking " << m << " with i = " << i << "\n";
        if ((m % 8) == 0) { // divisible by 8
            found= true;
            ans= m;
        }
        i--;
    }
    return found;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> number;
    int size = number.length();

    // note, a number is divisible by 8 if:
    // last digit is divisible by 2
    // last two digits divisible by 4
    // last three digits are divisible by 8

    if (div2(size - 1)) {
        cout << "YES\n" << ans;
    } else {
        cout << "NO";
    }

    return 0;
}

