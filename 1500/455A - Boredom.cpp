/*
 * Name: Minsi Hu
 * Date: 5/2/23
 * Problem: 455A
 * Difficulty Rating: 1500
 * Start Time: 10:57PM
 * End Time:
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned short n; // number of numbers
    cin >> n;

    unsigned long long arr[10001]{0}; // array to store occurences of numbers
    unsigned long long dp[10004]{0}; // array to track dp array
    unsigned short largest= 0; // largest number to optimize processing

    unsigned short a; // temporary variable to store a number
    while (n--) {
        cin >> a;
        arr[a]++;
        if (a > largest)
            largest= a;
    }

    /*
    // debugging:
    for (int i= 1; i <= largest; i++)
        cout << arr[i] << " ";
    cout << "\n";
    */

    for (unsigned short i= 1; i <= largest; i++) // process arr so that each element holds the number of points it will give
        arr[i]= i * arr[i];

    unsigned long long v; // temporary variable to store a number
    for (unsigned short i= 1; i <= largest; i++) { // process dp
        v= dp[i] + arr[i];
        dp[i]= v;
        if (dp[i+2] < v)
            dp[i+2]= v;
        if (dp[i+3] < v)
            dp[i+3]= v;
    }

    unsigned long long num_points= dp[largest]; // variable to store max number of points
    if (dp[largest + 1] > num_points)
        num_points= dp[largest + 1];

    cout << num_points;

    return 0;
}