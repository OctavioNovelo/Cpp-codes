#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Declaración de la matriz de tamaño n x n.
    int mat[n][n];

    // Lectura de la matriz de entrada.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Inicialización de las variables para recorrer la matriz.
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int dir = 0;

    // Ciclo para recorrer la matriz en espiral.
    while (top <= bottom && left <= right) {
        if (dir == 0) {  // Se recorre la fila superior.
            for (int i = left; i <= right; i++) {
                cout << mat[top][i] << " ";
            }
            top++;
        } else if (dir == 1) {  // Se recorre la columna derecha.
            for (int i = top; i <= bottom; i++) {
                cout << mat[i][right] << " ";
            }
            right--;
        } else if (dir == 2) {  // Se recorre la fila inferior.
            for (int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        } else if (dir == 3) {  // Se recorre la columna izquierda.
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
        dir = (dir + 1) % 4;  // Se actualiza la dirección para el siguiente recorrido.
    }
    cout << endl;

    return 0;
}
