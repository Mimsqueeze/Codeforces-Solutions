/*
 * Name: Minsi Hu
 * Date: 5/5/23
 * Problem: 580C
 * Difficulty Rating: 1500
 * Start Time: 1:10PM
 * End Time: 1:55PM
 */

#include <bits/stdc++.h>

using namespace std;

int answer= 0, m;

void travel(int vertex, int cats, list<int> tree[], bool arr[]);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> m;

    bool arr[n + 1]; // array storing whether vertex has a cat
    for (int i= 1; i <= n; i++) // fill array
        cin >> arr[i];

    list<int> tree[n + 1]; // array of lists storing children of a vertex
    int parent;
    int child;
    for (int i= 0; i < n - 1; i++) {
        cin >> parent >> child;
        tree[parent].push_front(child);
        tree[child].push_front(parent);
    }

    travel(1, 0, tree, arr);

    cout << answer;

    return 0;
}

void travel(int vertex, int cats, list<int> tree[], bool arr[]) {
    // cout << "vertex " << vertex << ": \n";

    if (arr[vertex])  // add cat if applicable, otherwise remove cats
        cats++;
    else
        cats= 0;

    if (cats <= m) { // if cats encountered less than max
        int size= (int) tree[vertex].size();
        if (size == 0) { // no children, leaf
            answer++;
        } else { // has children. do recursive call on every child
            while (size--) {
                // cout << "vertex " << vertex << " child: " << tree[vertex].front() << "\n";
                int child= tree[vertex].front();
                tree[child].remove(vertex);
                tree[vertex].pop_front();

                travel(child, cats, tree, arr);
            }
        }
    }
}

