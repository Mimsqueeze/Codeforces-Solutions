/*
 * Name: Minsi Hu
 * Date: 1/25/23
 * Problem: 492B
 * Difficulty Rating: 1200
 * Start Time: 8:00PM
 * End Time: 10:28PM
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// recursive function finds smallest radius given sorted vector, the index, the radius, and the size of the street
double smallestRadius(vector<double> &lanterns, int i, double r, long int &size) {
    // cout << "index: " << i << " val: " << lanterns[i] << " radius: " << r << endl;
    if (lanterns.size() == 1) { // special case: one lantern
        return max(lanterns[i], size-lanterns[i]);
    } else if (i == 0) { // first elt
        if (lanterns[0] == 0) { // first elt is 0, so do normal calc
            return smallestRadius(lanterns, i+1, (lanterns[i+1] - lanterns[0])/2, size);
        } else { // first elt is not zero, must account for distance from 0 and to elt
            return smallestRadius(lanterns, i+1, max(lanterns[0], (lanterns[i+1] - lanterns[0])/2), size);
        }
    } else if (i == lanterns.size()-1) { // last elt and base case
        if (lanterns[i] == size) { // last elt is the length of the street
            return r;
        } else { // last elt is not the length
            return max(size-lanterns[i],r);
        }
    } else { // any elt
        return smallestRadius(lanterns, i+1, max((lanterns[i+1] - lanterns[i])/2,r), size);
    }
}

int main() {
    int n; // number lanterns
    long int l; // size of street
    cin >> n >> l; // save inputs
    vector<double> lanterns(n);
    for (int i = 0; i < n; i++) { // save lantern positions into vector
        cin >> lanterns[i];
    }

    // sort and remove duplicates
    sort(lanterns.begin(), lanterns.end());
    lanterns.erase(unique(lanterns.begin(), lanterns.end()), lanterns.end());

    // for (auto x : lanterns) {
    //     cout << x << " ";
    // }
    // cout << endl;
    cout << fixed << smallestRadius(lanterns, 0, 0, l);
}