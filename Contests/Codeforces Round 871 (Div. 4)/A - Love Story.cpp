#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i, count;
    cin >> n;

    string s;
    string codeforces= "codeforces";

    while (n--) {
        count= 0;
        cin >> s;
        for (i= 0; i < 10; i++) {
            if (s[i] != codeforces[i])
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}