/* link: https://omegaup.com/arena/Yuc_2023_1/#problems/Subsecuencia-de-contrasena */

#include <iostream>

using namespace std;
int n, i=0, chars, j=0;

string sitepass, sofipass;

int main (){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> sitepass >> sofipass;

    while(i < sitepass.size()){
        if(sitepass[i] == sofipass[j]){
            i++;
            j++;
            chars++;
        }
        else{
            i++;
        }
        if( chars == sofipass.size()){
            cout<< "Si";
            return 0;
        }
    }
    cout << "No";
    return 0;
}