#include <iostream>

using namespace std;

int main(){

    long long n, k;

    cin >> n >> k;

    long long posicion[n];

    for(int i = 0; i < n; i++){
        cin >> posicion[i];
    }

    int k[n];
    for(int i = 0; i < k; i++){
        for(int i e; e < n; i++){
            k[i] = k[i - 1];
        }
    }

    for(int i = 0; i < n; i++){
        cout << k[i] << " ";
    }

    cout << endl;

}