#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;

    cin >> n;

    long long p[n];

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            long long x = p[0];
            p[0] += x * p[j];
        }
    }
    
    cout << p[0] << endl;

    return 0;
}