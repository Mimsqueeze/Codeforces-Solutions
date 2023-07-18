#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
#define     ll              long long
#define     ull             unsigned long long
#define     max2(a,b)       max(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     min2(a,b)       min(a,b)
#define     min3(a,b,c)     min(a,min(b,c))

using namespace std;

void solve() {
    int n;
    cin >> n;
    string team1;
    cin >> team1;
    string team2;
    int wins1= 1;
    int wins2= 0;
    n--;
    while (n--) {
        string team;
        cin >> team;
        if (team.compare(team1) == 0) {
            wins1++;
        } else {
            team2= team;
            wins2++;
        }
    }
    if (wins1 > wins2) {
        cout << team1;
    } else {
        cout << team2;
    }

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