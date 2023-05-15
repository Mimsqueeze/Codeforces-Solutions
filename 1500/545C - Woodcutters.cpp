/*
 * Name: Minsi Hu
 * Date: 5/13/23
 * Problem: 545C
 * Difficulty Rating: 1500
 * Start Time: 4:10PM
 * End Time: 4:33PM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, h, i;
    cin >> n >> x >> h; // get total number of trees, and the first tree
    int prev= x; // tracks end of previous segment

    int count= 1; // first tree can fall left so initialize count to 1
    i= n - 2;

    bool get_input= true; // flag to get the input in a loop iteration

    while (i-- > 0) { // loops until it gets to one before the last element
        if (get_input)
            cin >> x >> h; // read input
        else
            get_input= true;
        if (x - h > prev) { // check if tree can fall left
            count++;
            prev= x;
        } else { // if it cant, check if tree can fall right
            int prev_x= x, prev_h= h;
            cin >> x >> h;
            get_input= false;
            if (prev_x + prev_h < x) { // check if can fall right
                count++;
                prev= prev_x + prev_h;
            } else {
                prev= prev_x;
            }
        }
    }

    if (n >= 2) { // 2 or more trees, add 1 more for the last tree
        count++;
    }

    cout << count;

    return 0;
}

