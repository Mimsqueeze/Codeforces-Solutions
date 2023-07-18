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
    char c;
    string s;
    cin >> c >> s;
    string row1= "qwertyuiop";
    string row2= "asdfghjkl;";
    string row3= "zxcvbnm,./";
    map<char, char> right;
    for (int i= 0; i < row1.size()-1; i++) {
        right[row1[i]]= row1[i+1];
    }
    for (int i= 0; i < row2.size()-1; i++) {
        right[row2[i]]= row2[i+1];
    }
    for (int i= 0; i < row3.size()-1; i++) {
        right[row3[i]]= row3[i+1];
    }

    map<char, char> left;
    for (int i= 1; i < row1.size(); i++) {
        left[row1[i]]= row1[i-1];
    }
    for (int i= 1; i < row2.size(); i++) {
        left[row2[i]]= row2[i-1];
    }
    for (int i= 1; i < row3.size(); i++) {
        left[row3[i]]= row3[i-1];
    }
    if (c == 'R') { // shift left
        for (int i= 0; i < s.size(); i++) {
            s[i]= left[s[i]];
        }
    } else {
        for (int i= 0; i < s.size(); i++) {
            s[i]= right[s[i]];
        }
    }
    cout << s;
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