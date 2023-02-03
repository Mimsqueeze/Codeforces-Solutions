/*
 * Name: Minsi Hu
 * Date: 2/2/23
 * Problem: 698A
 * Difficulty Rating: 1400
 * Start Time: 7:59PM
 * End Time: 8:19PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int schedule[n];
    for (int i = n-1; i >= 0; i--) { // stores schedule in reverse order
        cin >> schedule[i];
    }
    int count = 0; // counts days that are rest
    int next_day = 0; // next_day is actually the previous in schedule, 0 is rest, 1 is contest, 2 is gym, 3 is indeterminant

    for (int i = 0; i < n; i++) { // loops through schedule backwards
        // do whatever is not next on the schedule if it is 3
        switch (schedule[i]) {
            case 0: // rest day, so take the rest day
                count++; // rest
                next_day = 0;
                break;
            case 1:
                // contest is being held, check if there was not a contest the next day. if there was then take a rest
                if (next_day == 1) { // next day is a contest
                    count++; // rest
                    next_day = 0;
                } else {
                    next_day = 1;
                }
                break;
            case 2:
                // gym, check if there was not gym the next day, if so then rest
                if (next_day == 2) { // next day is a gym
                    count++; // rest
                    next_day = 0;
                } else {
                    next_day = 2;
                }
                break;
            case 3:
                // gym or contest, check if next day is gym or contest and do the other. if it is rest, doesn't matter
                if (next_day == 1) {
                    next_day = 2;
                } else if (next_day == 2) {
                    next_day = 1;
                } else {
                    next_day = 3; // doesnt matter
                }
                break;
        }
    }

    cout << count;

    return 0;
}