#include <iostream>
#include <string>

using namespace std;

string tableBase64(string frase) {
    // Caracteres imprimibles en Base64
    string Base64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    string result;

    // Recorre cada carácter en la cadena "frase"
    for (char c : frase) {
        // Obtiene el valor ASCII del carácter
        int ASCII = static_cast<int>(c);

        // Asegúrate de que el valor ASCII esté en el rango correcto (0-255)
        if (ASCII >= 0 && ASCII <= 255) {
            // Convierte el valor ASCII a un índice válido para Base64
            int index = ASCII % 64;
            result += Base64[index];
        }
    }

    return result;
}

int main() {
    string frase;

    cout << "Ingrese una frase: ";
    cin >> frase;

    string encoded = tableBase64(frase);
    cout << "Frase codificada en Base64: " << encoded << endl;

    return 0;
}
