#include <iostream>
#include <vector>
using namespace std;

int find_volume(vector<vector<int>> &array, vector<vector<bool>> &checked, int n, int m, int i, int j);

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, largest_volume = -1;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        vector<vector<bool>> checked(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (checked[i][j] == false) {
                    largest_volume = max(largest_volume, find_volume(arr, checked, n, m, i, j));
                }
            }
        }

        cout << largest_volume << "\n";
    }

    return 0;
}

int find_volume(vector<vector<int>>& array, vector<vector<bool>>& checked, int n, int m, int i, int j) {
    if (checked[i][j] == true || array[i][j] == 0) {
        return 0;
    }

    int volume = array[i][j];
    checked[i][j] = true;
    if (i + 1 < n) {
        volume += find_volume(array, checked, n, m, i + 1, j);
    }
    if (i - 1 >= 0) {
        volume += find_volume(array, checked, n, m, i - 1, j);
    }
    if (j + 1 < m) {
        volume += find_volume(array, checked, n, m, i, j + 1);
    }
    if (j - 1 >= 0) {
        volume += find_volume(array, checked, n, m, i, j - 1);
    }
    return volume;
}
