#include <bits/stdc++.h>  

using namespace std;

int main() {
    long long a, b;  
    long long n;     

    cin >> a >> b >> n;  

    // Declarar una matriz (vector bidimensional) llamada fichas con n filas y 2 columnas para almacenar coordenadas de fichas
    vector<vector<long long>> fichas(n, vector<long long>(2));

    // Leer las coordenadas de las fichas y almacenarlas en la matriz fichas
    for (int i = 0; i < n; i++) {
        cin >> fichas[i][0] >> fichas[i][1];
    }

    long long count = 0;  

    // Recorrer las fichas en busca de ciertas condiciones
    for (int i = 0; i < n; i++) {
        // Primera Ficha
        if (i < n && (fichas[i][0] == a && fichas[i][1] != b)) {
            if (i + 1 < n && (fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1])) {
                if (fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] == b) {
                    count++;
                } else if (fichas[i + 1][0] == fichas[i][1] && fichas[i + 1][1] == b) {
                    count++;
                } else if (fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] != b && fichas[i + 1][1] != b) {
                    if (i + 2 < n && (fichas[i + 2][0] == fichas[i + 1][0] || fichas[i + 2][1] == fichas[i + 1][0])) {
                        if (fichas[i + 2][0] == b || fichas[i + 2][1] == b) {
                            count++;
                        }
                    }
                }
            }
        }
        if (i < n && (fichas[i][0] == b && fichas[i][1] != a)) {
            if (i + 1 < n && (fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1])) {
                if (fichas[i + 1][0] == fichas[i][1] && fichas[i + 1][1] == a) {
                    count++;
                } else if (fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] == a) {
                    count++;
                } else if (fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] != a && fichas[i + 1][1] != a) {
                    if (i + 2 < n && (fichas[i + 2][0] == fichas[i + 1][0] || fichas[i + 2][1] == fichas[i + 1][0])) {
                        if (fichas[i + 2][0] == a || fichas[i + 2][1] == a) {
                            count++;
                        }
                    }
                }
            }
        }
        //Segunda Ficha
        if (i + 1 < n && (fichas[i + 1][0] == a && fichas[i + 1][1] != b)) {
            if (fichas[i][0] == fichas[i + 1][1] || fichas[i][1] == fichas[i + 1][1]) {
                if (fichas[i][0] == fichas[i + 1][1] && fichas[i][1] == b) {
                    count++;
                } else if (fichas[i][1] == fichas[i + 1][1] && fichas[i][0] == b) {
                    count++;
                } else if (fichas[i][0] == fichas[i + 1][1] || fichas[i][1] == fichas[i + 1][1] && fichas[i][0] != b && fichas[i][1] != b) {
                    if (i + 2 < n && (fichas[i + 2][0] == fichas[i][0] || fichas[i + 2][0] == fichas[i][1] || fichas[i + 2][1] == fichas[i][1] || fichas[i + 2][1] == fichas[i][0])) {
                        if (fichas[i + 2][0] == b || fichas[i + 2][1] == b) {
                            count++;
                        }
                    }
                }
            }
        }
        if (i + 1 < n && (fichas[i + 1][0] == b && fichas[i + 1][1] != a)) {
            if (fichas[i][0] == fichas[i + 1][1] || fichas[i][1] == fichas[i + 1][1]) {
                if (fichas[i][0] == fichas[i + 1][1] && fichas[i][1] == a) {
                    count++;
                } else if (fichas[i][1] == fichas[i + 1][1] && fichas[i][0] == a) {
                    count++;
                } else if (fichas[i][0] == fichas[i + 1][1] || fichas[i][1] == fichas[i + 1][1] && fichas[i][0] != a && fichas[i][1] != a) {
                    if (i + 2 < n && (fichas[i + 2][0] == fichas[i][0] || fichas[i + 2][0] == fichas[i][1] || fichas[i + 2][1] == fichas[i][1] || fichas[i + 2][1] == fichas[i][0])) {
                        if (fichas[i + 2][0] == a || fichas[i + 2][1] == a) {
                            count++;
                        }
                    }
                }
            }
        }
        //Tercera Ficha
        if (i + 2 < n && (fichas[i + 2][0] == a && fichas[i + 2][1] != b)) {
            if (fichas[i][0] == fichas[i + 2][1] || fichas[i][1] == fichas[i + 2][1]) {
                if (fichas[i][0] == fichas[i + 2][1] && fichas[i][1] == b) {
                    count++;
                } else if (fichas[i][1] == fichas[i + 2][1] && fichas[i][0] == b) {
                    count++;
                } else if (fichas[i][0] == fichas[i + 2][1] || fichas[i][1] == fichas[i + 2][1] && fichas[i][0] != b && fichas[i][1] != b) {
                    if (fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1] || fichas[i + 1][1] == fichas[i][0]) {
                        if (fichas[i + 1][0] == b || fichas[i + 1][1] == b) {
                            count++;
                        }
                    }
                }
            }
        }
        if (i + 2 < n && (fichas[i + 2][0] == b && fichas[i + 2][1] != a)) {
            if (fichas[i][0] == fichas[i + 2][1] || fichas[i][1] == fichas[i + 2][1]) {
                if (fichas[i][0] == fichas[i + 2][1] && fichas[i][1] == b) {
                    count++;
                } else if (fichas[i][1] == fichas[i + 2][1] && fichas[i][0] == b) {
                    count++;
                } else if (fichas[i][0] == fichas[i + 2][1] || fichas[i][1] == fichas[i + 2][1] && fichas[i][0] != b && fichas[i][1] != b) {
                    if (fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1] || fichas[i + 1][1] == fichas[i][0]) {
                        if (fichas[i + 1][0] == b || fichas[i + 1][1] == b) {
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << count << endl;  

    return 0;  
}

