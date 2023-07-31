#include <iostream>

using namespace std;

int main(){

    long long n, pan = 0;

    cin >> n;

    long long box[n];

    for(int i = 0; i < n; i++){
        cin >> box[i];
    }

    long long pendientes;

    cin >> pendientes;

    long long breads[pendientes];

    for(int i = 0; i < pendientes; i++){
        cin >> breads[i];
    }

    for(int i = 1; i < pendientes; i++){
        if(breads[i] != breads[i - 1]){
            pan += box[i];
        }
    }

    cout << pan << endl;

    return 0;
}



