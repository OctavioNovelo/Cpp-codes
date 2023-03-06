/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Condicionales_Tarea#problems */
#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b && b == c && a == c){
        cout << a << " " << b << " " << c << endl;
    }
    else if(a < b && b < c){
        cout << a << " " << b << " " << c << endl;
    }
    else if(a < b && b > c && c < a){
        cout << c << " " << a << " " << b << endl;
    }
    else if(a < b && b > c){
        cout << a << " " << c << " " << b << endl;
    }
    else if(a > b && b < c && c < a){
        cout << b << " " << c << " " << a << endl;
    }
    else if(a > b && b < c && c > a){
        cout << b << " " << a << " " << c << endl;
    }
    else if(a > b && b > c){
        cout << c << " " << b << " " << a << endl;
    }
}