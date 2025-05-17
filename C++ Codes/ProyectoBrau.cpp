#include <iostream>
#include <fstream>
#include <cmath>
#include <locale>
using namespace std;

// Estructura que representa un planeta
struct Planeta {
    string nombre;
    double radio;      // en millones de km
    double periodo;    // en días
    double angulo;     // en grados
	double masa;      // en kg
};

// Prototipos de funciones
void ingresarPlanetas(Planeta planetas[], int& cantidad);
void simularOrbita(Planeta planetas[], int n, int dias);
void guardarResultados(Planeta planetas[], int n);
void calcularFG(Planeta planetas[], int n);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    Planeta planetas[10];
    int cantidad = 0;
    int opcion;
    int dias = 0;

    do {
        cout << "\n===== Simulador de Órbitas =====\n\n";
		cout << "1. Ingresar datos del Sol\n";
        cout << "2. Ingresar planetas\n";
        cout << "3. Simular órbitas\n";
        cout << "4. Guardar resultados\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            break; 
        case 2:
            ingresarPlanetas(planetas, cantidad);
            break;
        case 3:
            simularOrbita(planetas, cantidad, dias);
            break;
        case 4:
            guardarResultados(planetas, cantidad);
            break;
        case 5:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opción inválida.\n";
        }

    } while (opcion != 5);

    return 0;
}

// Función para ingresar los planetas
void ingresarPlanetas(Planeta planetas[], int&cantidad) {

    cout << "¿Cuántos planetas desea ingresar? ";
        cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "\nPlaneta #" << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> planetas[i].nombre;
        cout << "Radio orbital (millones de km): ";
        cin >> planetas[i].radio;
        cout << "Periodo orbital (días): ";
        cin >> planetas[i].periodo;
        planetas[i].angulo = 0; // inicia en 0 grados
        cout << "Masa (kg):";
        cin >> planetas[i].masa;
    }
}

// Función que simula la órbita y actualiza el ángulo
void simularOrbita(Planeta planetas[], int n, int dias) { 
    cout << "Ingrese cantidad de días a simular: ";
    cin >> dias;
        
    for (int i = 0; i < n; i++) {
        double gradosPorDia = 360.0 / planetas[i].periodo;
        planetas[i].angulo = fmod(gradosPorDia * dias, 360.0);
    }

    cout << "\nResultados de la simulación:\n";
    for (int i = 0; i < n; i++) {
        cout << "Planeta: " << planetas[i].nombre
            << " | Posición angular: " << planetas[i].angulo << "°\n";
    }
}
// Función que calcula la fuerza de gravedad entre cada planeta y el sol de nuestra galaxia, utilizando la formula de fuerza gravitacional
void calcularFG(Planeta planetas[], int n) {
}
// Función que guarda los resultados en un archivo
void guardarResultados(Planeta planetas[], int n) {
    ofstream archivo("orbita_planetas.txt");

    if (!archivo) {
        cout << "Error al crear archivo.\n";
        return;
    }

    archivo << "Resultados de órbita:\n";
    for (int i = 0; i < n; i++) {
        archivo << "Planeta: " << planetas[i].nombre
            << " | Posición angular: " << planetas[i].angulo << "°\n";
    }

    archivo.close();
    cout << "Resultados guardados en 'orbita_planetas.txt'\n";
}