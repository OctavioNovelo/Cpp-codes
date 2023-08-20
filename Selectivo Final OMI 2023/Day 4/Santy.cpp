#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Función para cargar el diccionario del Santyccionario desde un archivo
vector<string> cargarDiccionario() {
    vector<string> diccionario;
    ifstream archivoDiccionario("Santysccionario.txt"); // Reemplaza "santyccionario.txt" con el nombre de tu archivo de diccionario

    if (!archivoDiccionario) {
        cerr << "Error al abrir el archivo del diccionario." << endl;
        exit(1);
    }

    string palabra;
    while (getline(archivoDiccionario, palabra)) {
        diccionario.push_back(palabra);
    }

    archivoDiccionario.close();
    return diccionario;
}

// Función para contar cuántas palabras del diccionario pueden encajar en la palabra faltante
int contarPalabrasValidas(vector<string>& diccionario, string palabraFaltante) {
    int contador = 0;
    for (const string& palabra : diccionario) {
        if (palabra.size() == palabraFaltante.size()) {
            bool encaja = true;
            for (int i = 0; i < palabra.size(); i++) {
                if (palabraFaltante[i] != 'X' && palabraFaltante[i] != palabra[i]) {
                    encaja = false;
                    break;
                }
            }
            if (encaja) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    vector<string> diccionario = cargarDiccionario();

    ifstream archivoEntrada("0.in"); // Reemplaza "entrada.txt" con el nombre de tu archivo de entrada
    ofstream archivoSalida("0.out");   // Archivo donde se escribirán las respuestas

    if (!archivoEntrada) {
        cerr << "Error al abrir el archivo de entrada." << endl;
        return 1;
    }

    string linea;
    while (getline(archivoEntrada, linea)) {
        if (linea.find("X") != string::npos) { // Si la línea contiene "X", entonces es la palabra faltante
            int cantidadPalabrasValidas = contarPalabrasValidas(diccionario, linea);
            archivoSalida << cantidadPalabrasValidas << endl;
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    return 0;
}

