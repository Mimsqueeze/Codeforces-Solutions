/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 466
 * Difficulty Rating: 1200
 * Start Time: 5:40PM
 * End Time: 6:12PM
 */

#include <iostream>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost;
    if ((double)b/m < a) { // special tickets worth it
        cost = (n/m)*b;
        n -= (n/m)*m; // trips left uncovered
        cost += min(n*a,b); // if special tickets still worth it buy another one, if not just fill in with regular

    } else { // special tickets not worth it
        cost = n*a;
    }
    cout << cost;
}