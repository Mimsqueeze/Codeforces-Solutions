/*
 * Name: Minsi Hu
 * Date: 5/17/23
 * Problem: 580B
 * Difficulty Rating: 1500
 * Start Time: 1:36AM
 * End Time: 5/20/23 5:20PM
 */

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

typedef struct Friend {
    int m, f;
};

bool sortbymoney(Friend &a, Friend &b) {
    return (a.m < b.m); // sorts based on money
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, d;
    cin >> n >> d;

    Friend arr[n];
    for (int i= 0; i < n; i++) {
        Friend aFriend;
        cin >> aFriend.m >> aFriend.f;
        arr[i]= aFriend;
    }

    sort(arr, arr + n, sortbymoney);

#if 0
    // Debugging
    cout << "Tolerance: " << d << "\n";
    for (pair<int, int> x : vect) {
        cout << x.first << " " << x.second << "\n";
    }
#endif

    int l= 0, r= 0;
    ll largest= -1, friendship= 0;
    while (r < n) {
        while (arr[r].m - arr[l].m < d && r < n) {
            friendship += arr[r++].f;
        }
#if 0
        // debugging
        cout << l << " " << r << " " << friendship << "\n";
#endif
        if (friendship > largest)
            largest= friendship;
        friendship -= arr[l++].f;
    }

    cout << largest;

    return 0;
}
