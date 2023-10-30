/* Descripción
El programador genérico tiene N computadoras infectadas con un virus creado por el malvado Jorge. 
En cada segundo que pasa la cantidad de computadoras infectadas se multiplica por N
.El virus puede ser muy destructivo y por eso vino Santy a salvar a todas las computadoras 
del programador genérico y que todos puedan programar a gusto.

Santy llega con un equipo de suficientes personas para desinfectar todas las computadoras, 
pero cada persona puede desinfectar única y exactamente 
 computadoras. El equipo llegó cuando ya transcurrieron 
 segundos y desinfectaron instantáneamente todas las computadoras que pudieron. */

/* Link: https://omegaup.com/arena/simup1/#problems/Desinfectando-computadoras */

// 31% PA
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    long long n, k, e;
    cin >> n >> k;
    if (n == 0) { 
        e = 0;
        return 0;
    }
    if(n == 0 && k == 0){
        e = 0;
        return 0;
    }
    if(n != 0 && k == 0){
        e = n % 10;
        cout << e;
        return 0;
    }
    if(n != 0 && k != 0){
        e = ((n * n) * k);
        e = e % 10;
    } 
    cout << e;
    return 0;
}