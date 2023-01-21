/*
 * Name: Minsi Hu
 * Date: 1/20/23
 * Problem: 1A
 * Difficulty Rating: 1000
 * Start Time:
 * End Time:
 */

#include <iostream>
#include <cmath>

long long int divide_and_ceiling(long m, long a);

using namespace std;

int main() {
    long int n;
    long int m;
    long int a;
    cin >> n;
    cin >> m;
    cin >> a;
    long long int answer = divide_and_ceiling(m, a) * divide_and_ceiling(n, a);
    cout << answer;
}

long long int divide_and_ceiling(long m, long a) {
    if (m%a == 0) {
        return m/a;
    } else {
        return m/a + 1;
    }
}