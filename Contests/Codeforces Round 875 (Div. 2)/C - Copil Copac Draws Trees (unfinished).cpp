#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

void solve() {
    int n;
    cin >> n;
    list<pair<int,int>> input;
    int m= n-1;
    while (m--) {
        int u, v;
        cin >> u >> v;
        input.emplace_back(u,v);
    }
#if 0
    for (auto i= input.begin(); i != input.end(); i++) {
        cout << i->first << " " << i->second << "\n";
    }
#endif
    vector<bool> drawn(n+1, false);
    drawn[1]= true;
    bool finished= false;
    int count= 0;
    while (!finished) {
        auto i= input.begin();
        if (i != input.end()) {
            count++;
            cout << "reading the " << count << " time\n";
            for (auto i= input.begin(); i != input.end(); i++) {
                cout << i->first << " " << i->second << "\n";
            }
            while (i != input.end()) {
                // cout << "processing " << i->first << "\n";
                if (drawn[i->first] == true) {
                    drawn[i->second]= true;
                    i= input.erase(i);
                    // cout << "erased " << i->first << "\n";
                } else if (drawn[i->second] == true) {
                    drawn[i->first]= true;
                    i= input.erase(i);
                } else {
                    ++i;
                }
            }
        } else {
            finished= true;
        }
    }
    cout << count << "\n";

}

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}