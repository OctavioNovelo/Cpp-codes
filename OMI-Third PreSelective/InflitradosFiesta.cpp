#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, k;

    cin >> n >> k;

    long long mitad = k /2;

    k = 2 ^ mitad;
    
    if(k % 2 == 1){
        k *= 2;
    }

    long long respuesta = k(max) - k(min);
}

