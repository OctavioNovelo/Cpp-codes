#include <iostream>

using namespace std;

int main() {
    int n, m;
    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {  // iterar a través de cada matriz
        int first;  // primer elemento de la matriz
        cin >> first;

        // si el primer elemento es par, imprime la matriz y guarda en memoria
        if (first % 2 == 0) {
            cout << first;
            for (int j = 1; j < m * m; j++) {
                int a;
                cin >> a;
                cout << ' ' << a;
            }
            cout << '\n';
        } 
        // si no, guarda la matriz en memoria para imprimir después
        else {
            for (int j = 1; j < m * m; j++) {
                int a;
                cin >> a;
            }
        }
    }

    // imprimir las matrices cuyo primer elemento es impar
    for (int i = 0; i < n; i++) {
        int first;
        cin >> first;

        if (first % 2 != 0) {
            cout << first;
            for (int j = 1; j < m * m; j++) {
                int a;
                cin >> a;
                cout << ' ' << a;
            }
            cout << '\n';
        } else {
            for (int j = 1; j < m * m; j++) {
                int a;
                cin >> a;
            }
        }
    }

    return 0;
}
