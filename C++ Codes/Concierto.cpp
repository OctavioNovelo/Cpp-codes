#include <iostream>

using namespace std;

long long Filas;
long long Sillas;
long long Boletos;

long long Sentadas;
long long Paradas;

int main(){

    cin >> Filas >> Sillas;
    cin >> Boletos;

    Sentadas = Filas * Sillas ;

    if(Boletos <= Sentadas){
         Paradas = Boletos - Sentadas;
         if(Paradas <= 0){
            Paradas = 0;
            cout << Sentadas << " " << Paradas << "\n";
            return 0;
         }
         else{
            cout << Sentadas << " " << Paradas << "\n";
         }
    }
    else if(Boletos > Sentadas){
        Paradas = Boletos - Sentadas; 
        cout << Sentadas << " " << Paradas << "\n";
        return 0;
    }
}
