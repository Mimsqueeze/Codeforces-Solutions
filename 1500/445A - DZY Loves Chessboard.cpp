/*
 * Name: Minsi Hu
 * Date: 2/3/23
 * Problem: 445A
 * Difficulty Rating: 1500
 * Start Time: 3:30PM
 * End Time:
 */

#include <bits/stdc++.h>

using namespace std;

struct piece {
    int p;
    char color;
};

int n, m;

bool add_neighbors(piece &cell, const char board[], list<piece> &dfs, const int &_size) { // false is black, true is white
    // cout << "currently on cell " << cell.p << "\n";
    int l = 0, r = 0, u = 0, d = 0; // left right up down
    u = cell.p - m; // will be invalid if < 1
    d = cell.p + m; // will be invalid if > _size
    if ((cell.p-1) % m == 0) { // left edge piece
        r = cell.p + 1;
    } else if (cell.p % m == 0){ // right edge piece
        l = cell.p - 1;
    }

    char new_color; // assign new color
    if (cell.color == 'B') {
        new_color = 'W';
    } else {
        new_color = 'B';
    }

    // only adds to stack if its a valid spot to be processed
    if (u >= 1 && board[u] == '.') {
        dfs.push_back({u, new_color}); // cout << "pushing " << u << new_color << "\n";
    }
    if (d <= _size && board[d] == '.') {
        dfs.push_back({d, new_color}); // cout << "pushing " << d << new_color << "\n";
    }
    if (r && board[r] == '.') {
        dfs.push_back({r, new_color}); // cout << "pushing " << r << new_color << "\n";
    }
    if (l && board[l] == '.') {
        dfs.push_back({l, new_color}); // cout << "pushing " << l << new_color << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    int _size = n*m;

    vector<int> s{}; // set of good cells yet to be processed

    list<piece> dfs{};

    char board[_size+1];
    for (int i = 1; i < _size+1; i++) {
        char cell;
        cin >> cell;
        if (cell == '.') { // good cell, add to vector
            s.push_back(i);
            board[i] = '.';
        } else {
            board[i] = '-';
        }
    }

    dfs.push_back({s[0], 'B'}); // adds initial piece to stack
    while (!s.empty() || !dfs.empty()) { // while there are still cells to be filled
        if (!dfs.empty()) { // there are elements in the stack
            piece cell = dfs.back(); // take the top off
            dfs.pop_back(); // pop it
            if (find(s.begin(), s.end(), cell.p) != s.end()) { // element has not been processed yet
                board[cell.p] = cell.color; // put the piece on the board
                s.erase(remove(s.begin(),s.end(),cell.p),s.end()); // remove it from the set
                add_neighbors(cell, board, dfs, _size); // adds neighbors to stack
            }
        } else { // stack is empty, so add another element from the unprocessed set into the stack
            dfs.push_back({s[0], 'B'});
        }
    }

    for (int i = 1; i <= _size; i++) {
        cout << board[i];
        if (i%m == 0) {
            cout << "\n";
        }
    }

    return 0;
}
