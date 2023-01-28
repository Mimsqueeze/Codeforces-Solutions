/*
 * Name: Minsi Hu
 * Date: 1/28/23
 * Problem: 580A
 * Difficulty Rating:
 * Start Time: 2:12PM
 * End Time: 2:17PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 0;
    int maxcount;
    int temp = 0;
    while(n--) {
        int a;
        cin >> a;
        if (a >= temp) {
            count++;
        } else {
            count = 1;
        }
        temp = a;
        maxcount = max(count,maxcount);
    }
    cout << maxcount;
    return 0;
}