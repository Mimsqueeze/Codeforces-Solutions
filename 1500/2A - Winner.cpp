/*
 * Name: Minsi Hu
 * Date: 5/20/23
 * Problem: 2A
 * Difficulty Rating: 1500
 * Start Time: 5:47PM
 * End Time: 6:30PM
 */

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
using namespace std;

typedef struct Round {
    int roundnumber;
    int points;
} Round;

typedef struct Player {
    int points= 0;
    vector<Round> record;
} Player;

int find_last_added(Player p, int points) {
    int temp_points= 0;
    for (Round i : p.record) {
        temp_points += i.points;
        if (temp_points >= points) {
            return i.roundnumber;
        }
    }
}

void solve() {
    int rounds;
    cin >> rounds;
    unordered_map<string, Player> players;
    for (int i= 1; i <= rounds; i++) {
        string name;
        int points;
        cin >> name >> points;
        Round round= {i, points};
        if (players.find(name) == players.end()) { // Player does not exist
            Player new_player;
            players[name]= new_player;
        }
        players[name].points += points;
        players[name].record.push_back(round);
    }

    string winner;
    int points= 0;
    int lastadded= 1001;
    for (auto i = players.begin(); i != players.end(); i++) {
#if 0
        cout << i->first << " has " << i->second.points << " many points\n";
#endif
        if (i->second.points > points) {
            winner= i->first;
            points= i->second.points;
            lastadded= find_last_added(i->second, points);
        } else if (i->second.points == points) {
            int temp= find_last_added(i->second, points);
            if (temp < lastadded) {
                winner= i->first;
                points= i->second.points;
                lastadded= temp;
            }
        }
    }

    cout << winner;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}