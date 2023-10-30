/* Link: https://omegaup.com/arena/OFMI2023DIA2-virtual-4M3/#problems/ofmi-2023-ticketmonster */

#include <bits/stdc++.h>

using namespace std;

int main(){

    long long animals, hongos, restantes, limite, count;

    cin >> animals >> hongos >> restantes >> limite;

    long long ventas[animals];

    for(int i = 0; i < animals; i++){
        cin >> ventas[i];
    }

    for(int i = 0; i < animals; i++){
        if(ventas[i] >= limite){
            cout << limite << " ";
        }
        else if(ventas[i] <= limite){
            if(ventas[i] + ventas[i + 1] > hongos - restantes){
                for(int e = 0; e < hongos - restantes; e++){
                    count += ventas[e];
                    cout << ventas[i] << " ";
                    if(count > hongos - restantes){
                        for(int j = 0; j < count - i; j++)
                        ventas[e] = 0;
                        cout << ventas[e] << " ";
                        }
                    }
                }
            }
        }
    }
