#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, temp, largest, count;
    cin >> t;

    while (t--) {
        largest= 0;
        count= 0;
        cin >> n;
        while (n--) {
            cin >> temp;
            if (temp == 0) {
                count++;
            } else {
                count= 0;
            }
            if (count > largest) {
                largest = count;
            }
        }
        cout << largest << "\n";
    }
    return 0;
}