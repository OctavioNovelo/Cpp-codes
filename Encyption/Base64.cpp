#include <iostream>
#include <string>

using namespace std;

string frase;

string tableBase64(char c) {
    // Caracteres imprimibles en Base64
    string Base64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    
    // Calcula el índice del caracter en la tabla Base64
    long long indice[65];
    for(int i = 0; i < sizeof(indice); i++){
        indice[i] = Base64[i]; 
    }
    
    // Convierte el índice a un número en base 64 (6 bits)
    long long bits[1000000];
    for (int i = 0; i < 65; i++) {
        bits[i] = sizeof(indice[i]) * 6; 
    }
    
}

int main() {

    cin >> frase;

    // Paso 1: Dividir el string en caracteres
    for (char c : frase) {
        // Paso 2: Obtener el valor ASCII extendido de cada caracter en bits
        string binary = bitset<8>(c).to_string();

        // Paso 3: Dividir en stacks de 6 bits
        for (int i = 0; i < 8; i += 6) {
            string stack6 = binary.substr(i, 6);

            // Rellenar con ceros si es necesario
            while (stack6.length() < 6) {
                stack6 += "0";
            }

            // Paso 4: Convertir a Base64 e imprimir
            cout << toBase64(static_cast<char>(stoi(stack6, 0, 2)));
        }
    }

    cout << endl;

    return 0;
}
