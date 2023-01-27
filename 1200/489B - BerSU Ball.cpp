/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 489B
 * Difficulty Rating: 1200
 * Start Time: 6:15PM
 * End Time: 6:29PM
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // getting inputs
    int b,g;
    cin >> b;
    int boys[b];
    for (int i = 0; i < b; i++) {
        cin >> boys[i];
    }
    cin >> g;
    int girls[g];
    for (int i = 0; i < g; i++) {
        cin >> girls[i];
    }

    // sorting arrays
    sort(boys, boys + b);
    sort(girls, girls + g);

    // double pointer to count pairs
    int pairs = 0;
    int B = 0; // boys index
    int G = 0; // girls index
    while (B < b && G < g) {
        if (abs(boys[B]-girls[G]) <= 1) {
            pairs++;
            B++;
            G++;
        } else if (boys[B]-girls[G] > 1) {
            G++;
        } else {
            B++;
        }
    }
    cout << pairs;
}