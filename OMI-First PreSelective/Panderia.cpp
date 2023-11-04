/* Link: https://omegaup.com/arena/OMIYUC2023_1/#problems/Facturas-Defectuosas */
#include <iostream>

using namespace std;

int main(){

    long long d, total;

    cin >> d >> total; 

    if(total % d == 0){
        cout << "Si" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }
}