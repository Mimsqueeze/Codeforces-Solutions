/*
 * Name: Minsi Hu
 * Date: 2/20/23
 * Problem: 459B
 * Difficulty Rating: 1300
 * Start Time: 7:37PM
 * End Time: INCOMPLETE FAILS TEST 13
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    cin >> n;
    int arr[4]{-1, 1, -1, 1}; // 0 is high, 1 is high count, 2 is low, 3 is low count
    n-= 2;
    int c,d;
    cin >> c >> d;
    arr[0] = max(c,d);
    arr[2] = min(c,d);
    while (n--) {
        cin >> b;
        if (b > arr[0]) {
            arr[0] = b;
            arr[1] = 1;
        } else if (b == arr[0]){
            arr[1]++;
        } else if (b < arr[2]) {
            arr[2] = b;
            arr[3] = 1;
        } else if (b == arr[2]) {
            arr[3]++;
        }
    }

    if (arr[0] == arr[2]) {
        cout << "0 " << fixed << (((long long)arr[1])*(arr[1] + 1))/2;
    } else {
        cout << arr[0] - arr[2] << " " << ((long long)arr[1])*arr[3];
    }
    return 0;
}