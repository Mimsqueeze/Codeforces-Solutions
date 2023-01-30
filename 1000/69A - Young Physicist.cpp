/*
 * Name: Minsi Hu
 * Date: 1/30/23
 * Problem: 69A
 * Difficulty Rating: 1000
 * Start Time: 9:53AM
 * End Time: 9:56AM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int x;
    int y;
    int z;
    while (n--) {
        int xt;
        int yt;
        int zt;
        cin >> xt >> yt >> zt;
        x += xt;
        y += yt;
        z += zt;
    }
    if (!x && !y && !z) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;

}