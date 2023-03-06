/* Link: https://omegaup.com/arena/OFMI2023DIA2-virtual-4M3/virtual/#problems/ofmi-2023-recorriendo-huerto */

#include <bits/stdc++.h>

using namespace std;

void adelante(int x) {
	avanzado() + 1;
}

void atras(int y) {
	avanzado() + 1;
}

int avanzado() {
	cout << avanzado();
	return 0;
}

int vueltas() {
	if(cin >> adelante() && cin >> atras() || cin >> atras() && cin >> adelante()){
        vueltas() + 1;
    }
    cout << vueltas();
    return 0;
}

int main(void adelante(), void atras(), int avanzado(), int vueltas()){

    long long n, x, y;

    cin << n;

    for(int i = 0; i < n; i++){
        if(cin >> adelante(x)){
            adelante(i) = adelante(x);
            avanzado(i) + 1;
        }
        if(cin >> atras(y)){
            atras(i) = atras(y);
            avanzado(i) + 1;
        }
        if(avanzado(i) + 1 && atras(i) + 1 || atras(i) + 1 && avanzado(i) + 1){
            vueltas(i) + 1;
        }
        if(cin >> vueltas()){
            cout << vueltas(i);
        }
        if(cin >> avanzado()){
            cout << avanzado(i);
        }
    }
}