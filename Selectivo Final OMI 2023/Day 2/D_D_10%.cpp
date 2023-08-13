#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<char> rooms(n);
    vector<long long> gold(n);
    vector<long long> maxGold(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> rooms[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> gold[i];
    }

    long long totalGold = 0;

    // Case 1: No hay duendes (M)
    if (count(rooms.begin(), rooms.end(), 'M') == 0) {
        for (int i = 0; i < n; i++) {
            totalGold += gold[i];
        }
        cout << totalGold << endl;
        return 0;
    }

    // Case 2: Ai < Ai+1
    bool aiAscending = true;
    for (int i = 1; i < n; i++) {
        if (gold[i] <= gold[i - 1]) {
            aiAscending = false;
            break;
        }
    }
    if (aiAscending) {
        cout << totalGold << endl;
        return 0;
    }

    // Case 3: N <= 10
    if (n <= 10) {
        for (int i = 0; i < n; i++) {
            if (rooms[i] == 'M') {
                if (i > 0) {
                    maxGold[i] = max(maxGold[i], maxGold[i - 1]);
                }
            } else if (rooms[i] == 'D') {
                totalGold += gold[i];
            } else { // Room is 'C'
                long long roomGold = gold[i];
                int j = i - 1;
                while (j >= 0 && rooms[j] != 'M') {
                    roomGold += gold[j];
                    j--;
                }
                maxGold[i] = max(roomGold, (j >= 0 ? maxGold[j] : 0));
                totalGold += maxGold[i];
            }
        }
        cout << totalGold << endl;
        return 0;
    }

    // Case 4: N <= 10^3
    if (n <= 1000) {
        for (int i = 0; i < n; i++) {
            if (rooms[i] == 'M') {
                if (i > 0) {
                    maxGold[i] = max(maxGold[i], maxGold[i - 1]);
                }
            } else if (rooms[i] == 'D') {
                totalGold += gold[i];
            } else { // Room is 'C'
                long long roomGold = gold[i];
                int j = i - 1;
                while (j >= 0 && rooms[j] != 'M') {
                    roomGold += gold[j];
                    j--;
                }
                maxGold[i] = max(roomGold, (j >= 0 ? maxGold[j] : 0));
                totalGold += maxGold[i];
            }
        }
        cout << totalGold << endl;
        return 0;
    }

    // Case 5: N <= 10^6 (No restrictions)
    for (int i = 0; i < n; i++) {
        if (rooms[i] == 'M') {
            if (i > 0) {
                maxGold[i] = max(maxGold[i], maxGold[i - 1]);
            }
        } else if (rooms[i] == 'D') {
            totalGold += gold[i];
        } else { // Room is 'C'
            long long roomGold = gold[i];
            int j = i - 1;
            while (j >= 0 && rooms[j] != 'M') {
                roomGold += gold[j];
                j--;
            }
            maxGold[i] = max(roomGold, (j >= 0 ? maxGold[j] : 0));
            totalGold += maxGold[i];
        }
    }

    cout << totalGold << endl;
    return 0;
}

