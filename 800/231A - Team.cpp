/*
 * Name: Minsi Hu
 * Date:
 * Problem: 231A
 * Difficulty Rating: 800
 * Start Time:
 * End Time:
 */

#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        int b;
        int c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a+b+c > 1) {
            count++;
        }
    }
    cout << count;
}