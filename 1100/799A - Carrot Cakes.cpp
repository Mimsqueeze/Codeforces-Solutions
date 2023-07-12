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

// Note, credits to rifat448 on GitHub for the solution - I just commented it to aid my own understanding
void solve() {
    /* n is the total amount of cookies needed to be baked
     * t is the time it takes for each batch of k cookies to be baked
     * k is the number of cookies in each batch
     * d is the amount of time it takes to build the second oven */
    ll n,t,k,d;
    cin>>n>>t>>k>>d;

    // x is the number of batches of cookies that could be baked in the time that it took to build another oven
    ll x= ceil((double)d/t);

    // n is now the number of cookies that still need to be cooked after the second oven is built
    // Will be negative if all the cookies will be done by the time the second oven is done being built
    n= n-(x*k);

    // If n is negative, it isn't worth building the second oven because the cookies will be baked already
    if (n > 0) {
        // Time it takes to build second oven is divisible by t, meaning no overflow batches from first
        // If there is overflow from the first batch, then that means it will always be worth building the second
        // oven because it can start while the first is still finishing
        if (d%t == 0) {
            // If number of cookies left to bake is larger than can be baked in one batch, then it is worth it!
            // Otherwise, it is not worth it
            if (n > k) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        } else {
            cout << "YES";
        }
    } else { // output no
        cout<<"NO";
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