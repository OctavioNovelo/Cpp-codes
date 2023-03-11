/* Deberás imprimir "Santiago" si el gato se termina yendo con él o "Paulina" 
si el gato termina yendo con ella. Nota, en caso de que el gato se encuentre 
justo en el centro de ellos dos, el gato terminara yendo con Santiago porque le 
tiene más afecto.*/

#include <iostream>

using namespace std;

int main(){

    long long s, p, g;
    long long santiago, paulina;

    cin >> s >> p >> g;

    santiago = g - s;
    paulina = p - g;

    if(santiago == paulina){
        cout << "Santiago" << endl;
    }
    else if(paulina == 0){
        cout << "Paulina" << endl;
    }
    else if(santiago == 0){
        cout << "Santiago" << endl;
    }
    else if(santiago < 0){
        cout << "Paulina" << endl;
    }
    else if(santiago == paulina){
        cout << "Santiago" << endl;
        return 0;
    }
    else if(paulina == 0 && santiago != 0){
        cout << "Pauilina" << endl;
        return 0;
    }
    else if(santiago < paulina){
        cout << "Santiago" << endl;
        return 0;
    }
    else if(paulina < santiago){
        cout << "Paulina" << endl;
        return 0;
    }
}
