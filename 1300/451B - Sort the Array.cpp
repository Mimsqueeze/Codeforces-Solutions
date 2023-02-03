/*
 * Name: Minsi Hu
 * Date: 2/3/23
 * Problem: 451B
 * Difficulty Rating: 1300
 * Start Time: 1:30PM
 * End Time: 2:09PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // can split the problem into three tasks:
    // 1) find the start of the reverse sequence
    // if not found, then other loops do not run
    // 2) find the end of the reverse sequence
    // will always find since last value is int max
    // 3) make sure the rest of the array is sorted

    int n;
    cin >> n;

    // are values, not indices
    int prev_prev;
    int prev = 0;
    int curr = 0;

    int i = 1; // index variable for all loops
    int start = 0;
    int prev_start_val;
    int start_val;
    // task 1: find the start of the reverse sequence
    while (i < n + 1) { // starts after 0, stops before MAX
        prev_prev = prev;
        prev = curr;
        cin >> curr;
        if (curr < prev) { // curr is less than prev
            start = i - 1; // start is prev index
            start_val = prev;
            prev_start_val = prev_prev;
            i++; // i is currently on the index after start so increment it
            break;
        }
        i++;
    }

    // task 2: find the end of the reverse sequence
    int end = 0;
    int end_val;
    bool ans = true;
    while (i < n + 1) {
        prev = curr;
        cin >> curr;
        if (curr > prev) { // curr is greater than prev
            end = i - 1;
            end_val = prev;
            // must check that start is less than end + 1 and end is greater than start - 1
            // if this is not the case then it is not possible
            if (!(start_val < curr && end_val > prev_start_val)) {
                ans = false;
            }
            // i is currently on the index after end so increment it
            i++;
            break;
        }
        i++;
    }
    if (!end) { // edge case: end was not found so end is n
        end_val = curr;
        curr = INT32_MAX;
        end = n;
        if (!(start_val < curr && end_val > prev_start_val)) {
            ans = false;
        }
    }

    // task 3: check the rest of the array, if it is still possible
    if (ans) {
        while (i < n + 1) {
            prev = curr;
            cin >> curr;
            // rest of the elements must be greater than the previous
            // if this is not then case then it is not possible
            if (curr < prev) {
                ans = false;
                break;
            }
            i++;
        }
    }

    if (!start) { // if start was not found, then it was already sorted
        cout << "yes\n" << "1 1";
    } else if (ans) { // both start and end were found and ans is still true
        cout << "yes\n" << start << " " << end;
    } else { // start and end may have been found but ans is now false
        cout << "no";
    }

    return 0;
}