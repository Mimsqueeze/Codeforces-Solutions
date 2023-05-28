#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

int maxIdentical(vector<int> vect, int n) {
    int count= 0;
    int maxCount= 0;
    for (int i= 0; i < vect.size(); i++) {
        if (vect[i] == n) {
            count++;
            maxCount= max(count, maxCount);
        } else {
            count= 0;
        }
    }
    return maxCount;
}
void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i= 0; i < n; i++)
        cin >> A[i];
    for (int i= 0; i < n; i++)
        cin >> B[i];
    map<int, int> M;
    for (int i= 0; i < n; i++) {
        if (M.find(A[i]) == M.end()) { // DNE
            M[A[i]]= 1;
        } else {
            M[A[i]]++;
        }
        if (M.find(B[i]) == M.end()) { // DNE
            M[B[i]]= 1;
        } else {
            M[B[i]]++;
        }
    }
    int maxCount= 0;
    for (auto & i : M) {
        // cout << "finding element " << *i << "\n";
        // cout << "occurrences of " << i.first << ": " << i.second << "\n";
        if (i.second > maxCount) {
            int countA= 0;
            int maxA= 0;
            int countB= 0;
            int maxB= 0;
            for (int j= 0; j < n; j++) {
                if (A[j] == i.first) {
                    countA++;
                    maxA= max(countA, maxA);
                } else {
                    countA= 0;
                }
                if (B[j] == i.first) {
                    countB++;
                    maxB= max(countB, maxB);
                } else {
                    countB= 0;
                }
            }
            maxCount= max(maxCount, maxA + maxB);
        }
    }
    cout << maxCount << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}