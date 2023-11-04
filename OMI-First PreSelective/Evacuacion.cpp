#include <iostream>

using namespace std;

int main(){

    long long m, n, k = 1, sum, result, sum2;

    cin >> n >> m;

    long long edificio[n][m];

    for(int i = 1; i < n; i++){
        for(int a = 1; i < m; a++){
            cin >> edificio[i][a];
        }
    }

    for(int i = 1; i < n; i++){
        for(int a = 1; a < m; a++){
            sum += edificio[i][a];
        }
    }

    sum2 = edificio[n][k] + edificio[n][k + 1];

    for(int i = 0; i < n; i++){
        result = edificio[n][k] - edificio[n][k];

    }

    cout << result << endl;
    return 0;

}