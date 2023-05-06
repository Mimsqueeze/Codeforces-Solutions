#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool skill1= false;
        int min1= INT32_MAX;
        bool skill2= false;
        int min2= INT32_MAX;
        int bothskills= false;
        int minboth= INT32_MAX;

        int tempmin;
        int tempskills;
        int totaltime= INT32_MAX;
        while (n--) {
            cin >> tempmin;
            cin >> tempskills;

            if (tempskills == 11) {
                if (bothskills == false)
                    minboth= tempmin;
                else
                    minboth= min(tempmin, minboth);
                bothskills= true;
            } else if (tempskills == 10) {
                if (skill1 == false)
                    min1= tempmin;
                else
                    min1= min(tempmin, min1);
                skill1= true;
            } else if (tempskills == 01) {
                if (skill2 == false)
                    min2 = tempmin;
                else
                    min2 = min(tempmin, min2);
                skill2= true;
            }
        }
        if (bothskills == true || (skill1 == true && skill2 == true)) {
            if (skill1 == true && skill2 == true)
                totaltime= min(min1 + min2, minboth);
            else
                totaltime= minboth;
            cout << totaltime << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}