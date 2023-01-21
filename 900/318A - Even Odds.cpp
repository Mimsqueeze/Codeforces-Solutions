/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 318A
 * Difficulty Rating: 900
 * Start Time:
 * End Time:
 */

#include <iostream>
using namespace std;

int main() {
    long long int n;
    long long int k;
    cin >> n;
    cin >> k;
    if (k <= (n+1)/2) {
        cout << 2*k - 1;
    } else {
        cout << 2*(k-(n+1)/2);
    }
}