#include <bits/stdc++.h>
using namespace std;

bool checkvalid(int n, int m);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n;
        cin >> m;

        if (checkvalid(n, m) == true) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}

bool checkvalid(int n, int m) {
    if (n == m) {
        return true;
    } else if (n < m || n % 3 != 0) {
        return false;
    } else {
        return (checkvalid(n/3, m) || checkvalid(2*n/3, m));
    }
}