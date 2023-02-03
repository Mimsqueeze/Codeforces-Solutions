/*
 * Name: Minsi Hu
 * Date: 2/2/23
 * Problem: 368B
 * Difficulty Rating: 1100
 * Start Time: 3:48PM
 * End Time: 4:20PM
 */

#include <bits/stdc++.h>
using namespace std;

int n,m;
bool _map[100001]{false};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    int arr[n+1];
    arr[n] = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n-1; i >= 0; i--) {
        if (!_map[arr[i]]) { // if the value is not already in the map
            _map[arr[i]] = true; // put it in the map
            arr[i] = arr[i+1] + 1; // set val to prev value added by 1
        } else {
            arr[i] = arr[i+1]; // set val to prev value
        }
    }
    while (m--) {
        int l;
        cin >> l;
        cout << arr[l-1] << "\n";
    }
    return 0;
}