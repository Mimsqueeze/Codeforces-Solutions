#include <bits/stdc++.h>
#define endl "\n"

using i64 = long long;
using namespace std;

long long sum(string &s) {
    long long sum= 0;
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}
void solve() {
    string s;
    cin >> s;
    if (s.size() <= 1) {
        cout << 0;
        return;
    }
    int count= 0;
    long long a;
    do {
        a= sum(s);
        s= to_string(a);
        count++;
    } while (a >= 10);

    cout << count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}