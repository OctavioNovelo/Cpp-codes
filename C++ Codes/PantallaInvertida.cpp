#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int pantalla[N][M];

    // Leer valores de la pantalla
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> pantalla[i][j];
        }
    }

    // Invertir la pantalla verticalmente
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < M; j++) {
            swap(pantalla[i][j], pantalla[N - i - 1][j]);
        }
    }

    // Imprimir la pantalla invertida
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << pantalla[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
