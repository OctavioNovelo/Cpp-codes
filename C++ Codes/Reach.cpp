/* Después de que Jorge cruzó con éxito el Puente de Metrópolis en la OMIYUC pasada, 
decidió relajarse con una partida de tiroteo en Halo: Reach. Jorge vio que a veces 
las oleadas de enemigos seguían un patrón, el cual era que el orden en el que 
aparecen los enemigos es el mismo si lo ves desde la primera oleada a la última 
que si lo ves al revés. Jorge representa los enemigos como caracteres, así que 
para ejemplificar el patrón escribió lo siguiente:

ABCDCBA
Como se puede observar, si ves el orden de los enemigos de izquierda a derecha,
 es el mismo que de derecha a izquierda.

Este patrón le recordó mucho al patrón de los puentes bonitos del
 Puente de Metrópolis, por lo que decidió llamarle a este patrón de enemigos
  oleadas bonitas.

Jorge conoce la lista de enemigos en el orden que los enfrentará durante 
toda la partida y quiere hacer una estrategia eficaz para su partida de tiroteo.
 ¿Adivinas qué necesita Jorge? Así es, ya lo sabes. */

/* Link: https://omegaup.com/arena/simup1/#problems/OMIYuc-Tiroteo-en-Reach */

// 0% RTE

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, p, a, b;

    string rev;

    cin >> n;

    string s[n];

    for(int i = 0; i < n; i++) {
        getline(cin, s[i]);

    }

    cin >> p;

    for(int i = 1; i <= p; i++) {
        cin >> a >> b;
        for(int j = a; j < b && j < n; j++) {
            for (int e = a; e < b; e++) {
            rev = rev.append(s[i]);
            }
            if(s[i] == rev){
                cout << "Si" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}




