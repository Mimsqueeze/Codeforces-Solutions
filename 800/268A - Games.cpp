#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<int, int> m;
    vector<int> v;
    int n;
    cin >> n;
    while (n--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
        cin >> temp;
        if (!m[temp]) {
            m[temp]= 1;
        } else {
            m[temp]++;
        }
    }
    int count;
    for (int i= 0; i < v.size(); i++) {
        int home= v[i];
        count += m[home];
    }
    cout << count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i= 1; i <= t; i++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}