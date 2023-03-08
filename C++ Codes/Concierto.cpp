/* Link: https://omegaup.com/arena/problem/COMI-Sentados-o-parados/ */
#include <iostream>

using namespace std;

int main() {

    int filas, sillas, boletos;

    cin >> filas >> sillas;
    cin >> boletos;

    if (filas <= 0 || sillas <= 0) {
        cout << "Entrada invalida" << endl;
        return 0;
    }

    int asientos_disponibles = filas * sillas;
    int personas_sentadas = min(boletos, asientos_disponibles);
    int personas_paradas = max(0, boletos - asientos_disponibles);

    cout << personas_sentadas << " " << personas_paradas << endl;

    return 0;
}

/* Ejemplo corregido donde se toman en cuenta que dos personas no entran en el mismo lugar

#include <iostream>

using namespace std;

int main() {

    int Filas, Sillas, Boletos;

    cin >> Filas >> Sillas;
    cin >> Boletos;

    if (Filas <= 0 || Sillas <= 0) {
        cout << "Entrada invalida" << endl;
        return 0;
    }

    int Sentadas = Filas * Sillas;
    int Paradas = max(0, Boletos - Sentadas);

    cout << max(0, Sentadas - Paradas) << " " << Paradas << endl;

    return 0;
}
 */
