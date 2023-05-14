/* Link: https://omegaup.com/arena/Yuc_2023_1/#problems/El-amigo-favorito */

#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    long long n, d, k;

    cin >> n >> d >> k;

    long long j = 0;
    long long maxcandy = 1;
    d -= n;
    while(d > 0){
        for(j = k; j < n -1; k++) {
            d--;
        }
        for(j = k; j >= 0; j--){
            d--;
        }
        if(d > 0){
            j = k;
        }
        maxcandy++;
    }

        if(d == 0){
            cout << maxcandy << endl;
            return 0;
        }

    return 0;
}