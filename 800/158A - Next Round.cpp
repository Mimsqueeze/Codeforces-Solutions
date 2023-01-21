/*
 * Name: Minsi Hu
 * Date:
 * Problem: 158A
 * Difficulty Rating: 800
 * Start Time:
 * End Time:
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    int count = 0;
    int targetScore = 1;
    int score;
    int i = 1;
    cin >> score;
    while (i <= n && score >= targetScore && score >= 0) {
        if (i == k) {
            targetScore = score;
        }
        count++;
        i++;
        cin >> score;
    }
    cout << count;
}