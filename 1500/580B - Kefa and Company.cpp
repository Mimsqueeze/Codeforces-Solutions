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

bool sortbymoney(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.first < b.first); // sorts based on money
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, i, d;
    cin >> n >> d;
    i= n;

    vector<pair<int,int>> vect;
    while (i--) {
        int m, f;
        cin >> m >> f;
        vect.push_back(make_pair(m, f));
    }

    sort(vect.begin(), vect.end(), sortbymoney);

#if 0
    // Debugging
    cout << "Tolerance: " << d << "\n";
    for (pair<int, int> x : vect) {
        cout << x.first << " " << x.second << "\n";
    }
#endif

    int m[n], f[n];
    i= 0;
    for (auto iter = vect.begin(); iter < vect.end(); i++, iter++){
        m[i]= iter -> first;
        f[i]= iter -> second;
    }

    int l= 0, r= 0;
    ll largest= -1, friendship= 0;
    while (r < n) {
        while (m[r] - m[l] < d && r < n) {
            friendship += f[r++];
        }
#if 0
        // debugging
        cout << l << " " << r << " " << friendship << "\n";
#endif
        if (friendship > largest)
            largest= friendship;
        friendship -= f[l++];
    }

    cout << largest;

    return 0;
}
