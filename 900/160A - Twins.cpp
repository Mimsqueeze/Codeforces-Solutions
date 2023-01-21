/*
 * Name: Minsi Hu
 * Date: 1/19/23
 * Problem: 160A
 * Difficulty Rating: 900
 * Start Time:
 * End Time:
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    int values[100] = {}; // coins[0] is cost 1, coins[99] is cost 100
    for (int i = 0; i < n; i++) {
        int amount;
        cin >> amount;
        values[amount - 1] += 1;
        total += amount;
    }
    int stealAmount = 0;
    int numCoins = 0;
    int j = 99;
    while (j >= 0 && stealAmount <= total - stealAmount) {
        int k = values[j];
        while (k > 0 && stealAmount <= total - stealAmount) {
            stealAmount += j + 1;
            numCoins++;
            k--;
        }
        j--;
    }

    cout << numCoins;
}