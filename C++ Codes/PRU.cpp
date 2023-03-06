/*  Link: https://omegaup.com/arena/OFMI2023DIA2-virtual-4M3/#problems/ofmi-2023-lechuga */

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long n, m, carpincho, casita, lechuga;
    int direccion = 0;
    int arriba = 0, abajo = 0;

    cin >> n >> m;

    long long huerto[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> huerto[i][j];
        }
    }

    while(arriba <= n -1 && abajo <= n - 1){
        if(direccion == 0){
            for(int i = 0; i <= n - 1; i++){
                if(huerto[i][m] == -1){
                    carpincho + 1;
                }
                else if(huerto[i][m] == 1){
                    casita + 1;
                }
                else if(huerto[i][m] == 2){
                    lechuga + 2;
                }
                arriba++;
                abajo++;
                m++;
            }
        direccion = (direccion + 1) % 4;
        }
    }

    cout << lechuga - carpincho;
    return 0;
}