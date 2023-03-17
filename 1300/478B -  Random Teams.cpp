/*
 * Name: Minsi Hu
 * Date: 3/17/23
 * Problem: 478B
 * Difficulty Rating: 1300
 * Start Time: 12:10PM
 * End Time:
 */

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, t;
    cin >> p >> t;

    long long sum;

    // Minimum case: Split participants between teams
    int a, b; // a number per team, b number teams
    int x, y; // x number per team, y number teams
    a = p/t;
    if ((double)t/p == 0) { // case: p divisible by t
        // aC2
        sum = 1;
        for (int i = 1; i <= 2; i++){
            sum = sum * (a - 2 + i) / i;
        }
        cout << (t * sum);
    } else { // case: p not divisible by t
        x = a + 1;
        b = t;
        y = 0;
        sum = a*b;
        while (sum != p) {
            b--;
            y++;
            sum-= a;
            sum+= x;
        }
        // aC2 * b + xC2 + y
        long long sum1 = 1;
        long long sum2 = 1;
        // aC2
        for (int i = 1; i <= 2; i++){
            sum1 = sum1 * (a - 2 + i) / i;
        }
        // xC2
        for (int i = 1; i <= 2; i++){
            sum2 = sum2 * (x - 2 + i) / i;
        }
        sum= sum1*b + sum2*y;
        cout << sum << " ";
    }


    // Maximum case: Group all participants into one team and do nCr
    int n= p - t + 1;
    sum = 1;
    for (int i = 1; i <= 2; i++){
        sum = sum * (n - 2 + i) / i;
    }
    cout << sum;

    return 0;
}