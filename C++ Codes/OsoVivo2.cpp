#include <iostream> 
using namespace std;

int Fila;
int Columna;
int Con;
int Con2;

int main(){

    cin >> Fila;
    cin >> Columna;


    for(;Fila > Con;Con++){

    cout << '#';
    cout << '\n';
    cout << '#';

    for(;(Columna > Con2) - 1;Con2++){
        cout << '.' << '\n';
    }

    }
    
}
