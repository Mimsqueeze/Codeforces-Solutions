/*
 * Name: Minsi Hu
 * Date: 2/6/23
 * Problem: 1324D
 * Difficulty Rating: 1400
 * Start Time: 1:19pm
 * End Time:
 * INCOMPLETE SOLUTION, WILL SOLVE LATER ********************
 */

#include <bits/stdc++.h>
using namespace std;

// find first index where the array element is >= x and prev element is < x
int binarySearch(vector<int> &arr, int l, int r, int &x) {
    if (r >= l) {
        int mid = (r + l) / 2;

        // If element is smaller than x
        if (arr[mid] < x) {
            // If the next element is greater or equal than x
            // if (arr[mid + 1] >= x)
            //     return mid + 1; // index found
            // Else the value we are looking for is in the right subarray
            return binarySearch(arr, mid + 1, r, x);
        }
        // comes here if greater than or equal to
        if (arr[mid] >= x) {
            if (arr[mid - 1] < x)
                return mid; // index found
        }
        // Else look in left subarray
        return binarySearch(arr, l, mid - 1, x);
    }

    return -1;
}

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

    // need to perform binary search to find the another element, which when summed
    // together, is greater than or equal to 1, meaning the teacher favors it

    int count = 0; // count tracks number of pairs

    int i;
    for (i = 0; i < n-1; i++) {
        if (bs[i] <= 0) {
            int x = (-1) * (bs[i]) + 1;
            int j = binarySearch(bs, i + 1, n - 1,x); // j is the index of the element where that element and above are valid
            // cout << j << "\\ ";
            if (j != -1) {
                count += n - j;
            } else {
                break;
            }
        } else {
            break;
        }
    }
    // cout << i << "\n";
    int l = (n - i); // length
    if (bs[i] > 0) {
        count += l*(l-1)/2;
    }
    cout << count;
    return 0;
}