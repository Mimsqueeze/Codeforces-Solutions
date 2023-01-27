/*
 * Name: Minsi Hu
 * Date: 1/27/23
 * Problem: 4C
 * Difficulty Rating: 1300
 * Start Time: 2:31PM
 * End Time: 3:00PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_map<string,int> registrar;
    while(n--) {
        string username;
        cin >> username;
        if (registrar.find(username) == registrar.end()) { // not in map
            registrar[username] = 1;
            cout << "OK" << endl;
        } else { // in map
            cout << username + to_string(registrar[username]) << endl;
            registrar[username]++;
        }
    }
    return 0;
}