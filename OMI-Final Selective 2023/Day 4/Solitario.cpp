#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    if (n == 1 || n == 0) {
        cout << "0" << endl;
        return 0;
    }

    vector<int> cartas(n);

    for (int i = 0; i < n; ++i) {
        cin >> cartas[i];
    }

    int moves = 0;
    vector<pair<int, int>> movimiento(n); // Cambiado a 'n' en lugar de 'movimiento.size()'

    for (int i = 0; i < n; ++i) {
        if (cartas[i] != i % 3 + 1) {
            int j = i + 1;
            while (cartas[j % n] != i % 3 + 1) {
                j++;
            }
            swap(cartas[i], cartas[j % n]);
            movimiento[moves] = make_pair(i, j % n); // Corregido el acceso a 'movimiento'
            moves++;
        }
    }

    cout << moves << endl;

    for (int i = 0; i < moves; ++i) {
        cout << movimiento[i].first + 1 << " " << movimiento[i].second + 1;
        if (i < moves - 1) {
            cout << "\n";
        }
    }

    return 0;
}
































