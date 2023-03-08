/* Link: https://omegaup.com/arena/problem/Calculos-condicionales/#problems */
#include <iostream>

using namespace std;

int main(){

    long long n;

    cin >> n;
    
    long long count = 0;
    long long op = n;

    if(n % 2 == 0){
        op = n / 2;
        count++;
    }
    else if(n % 2 != 0){
        op = n + 1;
        count++;
    }

    if(op >= 100){
        op = op / 100;
        count++;
    }
    else if(op >= 10 && op <= 99){
        op = op / 10;
        count++;
    }

    if(op % 3 == 0){
        op = op - 1;
        count++;
    }

    cout << op << " " << count << endl;

    return 0;
}