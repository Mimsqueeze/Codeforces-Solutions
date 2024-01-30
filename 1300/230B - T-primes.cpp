/*
 * Name: Minsi Hu
 * Date: 1/28/23
 * Problem: 230B
 * Difficulty Rating: 1300
 * Start Time: 2:40PM
 * End Time: 3:11PM
 */

#include <bits/stdc++.h>
using namespace std;

bool isTPrime (long long int &x) {
    if (x == 4 || x == 9) // edge case of t-prime
        return true;
    if (x <= 3 || x % 2 == 0 || x % 3 == 0) // cuts sample size
        return false;

    // now find if square root of x is prime
    long double a = sqrt(x);

    // if it is not a perfect square, no chance of being t prime
    if (trunc(a) != a)
        return false;

    x = (long) a; // x is now the sqrt of x

    for (int i = 5; i*i <= a; i+=6) {
        if (x%i == 0 || x%(i+2) == 0) // if divisible by 5,7,11,13,17,19, etc. then not prime
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        long long int x;
        cin >> x;
        if (isTPrime(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}