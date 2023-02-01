/*
 * Name: Minsi Hu
 * Date: 2/1/23
 * Problem: 479C
 * Difficulty Rating: 1400
 * Start Time: 4:41PM
 * End Time: 5:01PM
 */

#include <bits/stdc++.h>
using namespace std;

struct e {
    int a; // normal date
    int b; // early date
};

bool compare(const e &A, const e &B) {
    // if normal dates are equal compare early dates
    if (A.a == B.a) {
        return A.b < B.b;
    }
    return A.a < B.a; // compare normal dates
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    e arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].a >> arr[i].b;
    }
    sort(arr, arr + n, compare);

    /*
    for (auto x : arr) {
        cout << x.a << " ";
    }
    cout << "\n";
    */

    int day = min(arr[0].a, arr[0].b);
    for (int i = 1; i < n; i++) {
        if (arr[i].b >= day) {
            day = arr[i].b;
        } else {
            day = arr[i].a;
        }
    }

    cout << day;
    return 0;
}