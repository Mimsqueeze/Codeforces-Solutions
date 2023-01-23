/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 706B
 * Difficulty Rating: 1100
 * Start Time: 10:24PM
 * End Time: 12:08PM
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int l, int r, int &x);

int main() {
    int n = -1; // number of shops
    int q; // number of days

    // gather input
    cin >> n;

    vector<int> prices(n); // prices from each shop
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> q;

    // sort array
    sort(prices.begin(), prices.end());

    for (int j = 0; j < q; j++) {
        int m;
        cin >> m;
        cout << binarySearch(prices, 0, n-1, m) + 1 << "\n";
    }
}

// repeats until last index <= x
int binarySearch(vector<int> &arr, int l, int r, int &x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If element is smaller than or equal to mid
        if (arr[mid] <= x) {
            // If the next element is greater
            if (arr[mid + 1] > x)
                return mid; // index found
            // Else the value we are looking for is in the right subarray
            return binarySearch(arr, mid + 1, r, x);
        }
        // Else the element can only be present in left subarray
        return binarySearch(arr, l, mid - 1, x);

    }

    // We reach here when element is not present in array
    if (x >= arr[r])
        return r;
    return -1;
}