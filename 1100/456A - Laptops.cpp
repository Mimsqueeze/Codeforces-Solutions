/*
 * Name: Minsi Hu
 * Date: 1/22/23
 * Problem: 456A
 * Difficulty Rating: 1100
 * Start Time: 9:24PM
 * End Time: 9:50PM
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct laptop {
    int price;
    int quality;
};

bool comparePrice(const laptop &a, const laptop &b) {
    return a.price < b.price;
}

int main() {
    int n;
    cin >> n;
    vector<laptop> list(n);
    for (int i = 0; i < n; i++) {
        laptop l;
        cin >> l.price;
        cin >> l.quality;
        list[i] = l;
    }
    sort(list.begin(), list.end(), comparePrice);
    bool found = false;
    int i = 0;
    while (!found && i + 1 < n) {
        if (list[i].quality > list[i+1].quality)
            found = true;
        i++;
    }
    if (found)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}
