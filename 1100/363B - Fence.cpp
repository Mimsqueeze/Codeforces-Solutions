/*
 * Name: Minsi Hu
 * Date: 1/22/23
 * Problem: 363B
 * Difficulty Rating: 1100
 * Start Time: 7:13PM
 * End Time: 9:00PM
 */

#include <iostream>
#include <vector>
using namespace std;

int min_summate(vector<int>& fence, int index, int& min_index, int& k, int& n);

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> fence(n + 1,0);
    for (int i = 1; i <= k; i++) {
        cin >> fence[i];
        fence[0] += fence[i]; // 0th index of fence is the minimum sum
    }
    for (int i = k + 1; i <= n; i++) {
        cin >> fence[i];
    }
    int min_index = -1;
    min_summate(fence, 1, min_index, k, n);
    cout << min_index;
    /*
    for (auto x : fence) {
        cout << x << " ";
    }
    */
    return 0;
}

int min_summate(vector<int>& fence, int index, int& min_index, int& k, int& n) {
    if (index + k <= n + 1) {
        if (index != 1) {
            fence[0] = fence[0] - fence[index - 1] + fence[index + k - 1];
        }
        // cout << fence[0] << endl;
        int temp = fence[0];
        int next_sum = min_summate(fence, index + 1, min_index, k, n);
        if (temp < next_sum) {
            min_index = index;
            return temp;
        } else {
            return next_sum;
        }
    } else {
        return INT_MAX;
    }
}
