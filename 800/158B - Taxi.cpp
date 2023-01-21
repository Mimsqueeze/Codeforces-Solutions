/*
 * Name: Minsi Hu
 * Date:
 * Problem: 158B
 * Difficulty Rating: 800
 * Start Time:
 * End Time:
 */

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int taxis = 0;

    int occurrences[3] = {0, 0, 0};

    int groups;

    cin >> groups;

    for (int i = 0; i < groups ; i++) {
        int size;
        cin >> size;
        switch (size) {
            case 1:
                occurrences[0] = occurrences[0] + 1;
                break;
            case 2:
                occurrences[1] = occurrences[1] + 1;
                break;
            case 3:
                occurrences[2] = occurrences[2] + 1;
                break;
            case 4:
                taxis++;
                break;
        }
    }
    /*
    cout << "printing array\n";
    for (int i = 0; i < sizeof(occurrences) / sizeof(int) ; i = i + 1) {
        cout << occurrences[i] << "\n";
    }
    */

    // forming 4s from 3+1
    int num3_1 = min(occurrences[2], occurrences[0]);
    occurrences[0] = occurrences[0] - num3_1;
    occurrences[2] = occurrences[2] - num3_1;
    taxis += num3_1;

    // forming 2s from 1+1
    int num1_1 = occurrences[0]/2;
    occurrences[0] = occurrences[0] - (num1_1*2);
    occurrences[1] = occurrences[1] + num1_1;

    // forming 4s from 2+2
    int num2_2 = occurrences[1]/2;
    occurrences[1] = occurrences[1] - (num2_2*2);
    taxis += num2_2;

    if (occurrences[0] > 0 || occurrences[1] > 0) {
        taxis++;
    }

    taxis += occurrences[2];

    cout << taxis;
}