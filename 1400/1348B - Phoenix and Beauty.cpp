/*
 * Name: Minsi Hu
 * Date: 3/18/23
 * Problem: 1348B
 * Difficulty Rating: 1400
 * Start Time: 12:47AM
 * End Time: 2:07AK
 */

    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;
        while (t--) {
            int n; // number elts in array
            int k; // size of subarray
            cin >> n >> k;
            int *arr = (int *) calloc(k, sizeof (int));
            int j = -1; // index for arr
            bool num[101]{false}; // array to track unique elements
            for (int i = 0; i < n; i++) {
                int b;
                cin >> b;
                if (!num[b]) { // unique element
                    num[b] = true;
                    if (++j < k) // still have space
                        arr[j] = b;
                }
            }
            if (j >= k) { // too many unique elements
                cout << "-1\n";
            } else { // valid
                cout << n*k << "\n";
                for (int z = 0; z < n; z++) { // loop for n occurences
                    for (int i = 0; i < k; i++) // loop k
                        cout << ((!arr[i]) ? (1) : arr[i]) << " ";
                }
                cout << "\n";
            }
        }

        return 0;
    }