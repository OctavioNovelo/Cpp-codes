/* Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Caracteres_Tarea#problems */

#include <iostream> // Incluimos la biblioteca de entrada y salida

using namespace std; // Usamos el espacio de nombres std

int main(){ // Inicia la función principal

    long long m; // Definimos una variable para el tiempo que Bessie tiene para regresar a la granja
    long long t; // Definimos una variable para la cantidad de tramos del camino
    long long u; // Definimos una variable para el tiempo que Bessie tarda en recorrer un tramo en subida
    long long f; // Definimos una variable para el tiempo que Bessie tarda en recorrer un tramo en plano
    long long d; // Definimos una variable para el tiempo que Bessie tarda en recorrer un tramo en bajada

    cin >> m >> t >> u >> f >> d; // Leemos los valores de entrada para m, t, u, f y d
    char longitud[t]; // Definimos un arreglo para guardar la longitud de cada tramo del camino

    for(int i = 0; i < t; i++){ // Leemos la longitud de cada tramo del camino y los almacenamos en el arreglo longitud
        cin >> longitud[i];
    }

    long long count = 0; // Definimos una variable para contar la distancia recorrida
    long long spacecount = 0; // Definimos una variable para contar la cantidad de tramos recorridos

    for(int i = 0; i < t; i++){ // Recorremos los tramos del camino
        if(longitud[i] == 'U' || longitud[i] == 'D'){ // Si el tramo es de subida o bajada, sumamos el tiempo de recorrido en subida y bajada a count
            count += u + d;
        }
        else if(longitud[i] == 'F'){ // Si el tramo es plano, sumamos el tiempo de recorrido en plano dos veces a count
            count += f + f;
        }

        if(count > m){ // Si la distancia recorrida es mayor que el tiempo disponible para regresar, salimos del ciclo
            break;
        }
        spacecount++; // Incrementamos la cantidad de tramos recorridos
    }

    cout << spacecount << endl; // Imprimimos la cantidad de tramos recorridos
    return 0; // Termina el programa
}
