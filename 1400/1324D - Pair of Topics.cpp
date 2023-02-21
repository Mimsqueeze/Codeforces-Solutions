/*
 * Name: Minsi Hu
 * Date: 2/6/23
 * Problem: 1324D
 * Difficulty Rating: 1400
 * Start Time: 1:19pm
 * End Time: 6:21pm 2/21/23
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> bs(n);

    for (int i = 0; i < n; i++) {
        cin >> bs[i];
    }
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        bs[i] -= temp;
    }

    // bs now contains an array of the difference between teacher and student ratings
    sort(bs.begin(), bs.end());

    /*
    for (auto x : bs) {
        cout << x << " ";
    }
    cout << "\n";
    */
    // find the element such that when summed together, the sum is greater than 0

    long long count = 0; // count tracks number of pairs

    int i;

    for (i = 0; i < n-1; i++) {
        if (bs[i] <= 0) {
            int j = n - (lower_bound(bs.begin()+i, bs.end(), -bs[i]+1) - bs.begin());
            count += j;
        } else {
            break;
        }
    }
    long long k = n-i-1;
    count += (k*(k+1)/2);
    cout << count;
    return 0;
}