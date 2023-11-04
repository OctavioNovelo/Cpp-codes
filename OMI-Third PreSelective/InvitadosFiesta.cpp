#include <bits/stdc++.h>
#include <vector>


using namespace std;

vector<int> determinarInvitados() {
    // Paso 1: Leer los valores de entrada
    int n_amigos, n_no_pueden_asistir, max_invitados;
    cin >> n_amigos >> n_no_pueden_asistir >> max_invitados;

    // Paso 2: Leer la lista de amigos de Santy en orden de preferencia
    vector<int> amigos_preferencia(n_amigos);
    for (int i = 0; i < n_amigos; i++) {
        cin >> amigos_preferencia[i];
    }

    // Paso 3: Leer la lista de amigos que no pueden asistir
    unordered_set<int> amigos_no_pueden_asistir;
    for (int i = 0; i < n_no_pueden_asistir; i++) {
        int amigo;
        cin >> amigo;
        amigos_no_pueden_asistir.insert(amigo);
    }

    // Paso 4: Crear un vector vacío para almacenar los amigos que asistirán a la fiesta
    vector<int> invitados;

    // Paso 5: Recorrer la lista de amigos en orden de preferencia
    for (int amigo : amigos_preferencia) {
        // Verificar si el amigo no está en la lista de amigos que no pueden asistir
        if (amigos_no_pueden_asistir.find(amigo) == amigos_no_pueden_asistir.end()) {
            // Verificar si el número máximo de invitados no ha sido alcanzado
            if (max_invitados > 0) {
                // Agregar el amigo a la lista de invitados
                invitados.push_back(amigo);
                max_invitados--;
            }
        }
    }

    // Devolver la lista de invitados
    return invitados;
}

int main() {
    // Llamar a la función para determinar los invitados
    vector<int> invitados = determinarInvitados();

    // Paso 6: Imprimir los resultados
    if (invitados.empty()) {
        cout << "-1" << endl;
    } else {
        for (int amigo : invitados) {
            cout << amigo << " ";
        }
        cout << endl;
    }

    return 0;
}