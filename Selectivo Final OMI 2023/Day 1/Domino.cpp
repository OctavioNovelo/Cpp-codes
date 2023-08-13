#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    long long n;

    cin >> a >> b >> n;

    vector<vector<long long>> fichas(n, vector<long long>(2));

    for (int i = 0; i < n; i++) {
        cin >> fichas[i][0] >> fichas[i][1];
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        if ((fichas[i][0] == a && fichas[i][1] != b)){ //Si la primera ficha tiene A;
            if(fichas[i][1] == fichas[i + 1][0]){ //Si valor 2 == valor 1 de la primera ficha
                if(fichas[i + 1][1] == b){
                    count++;
                }
                else if(fichas[i + 1][1] != b){
                    if(fichas[i + 1][1] == fichas[i + 2][0]){
                        if(fichas[i + 2][1] == b){
                            count++;
                        }
                    }
                    else if(fichas[i + 1][1] == fichas[i + 2][1]){
                        if(fichas[i + 2][0] == b){
                            count++;
                        }
                    }
                }
            }
            if(fichas[i][1] == fichas[i + 1][1]){
                if(fichas[i + 1][0] == b){
                    count++;
                }
                else if(fichas[i + 1][0] != b){
                    if(fichas[i + 1][0] == fichas[i + 2][0]){
                        if(fichas[i + 2][1] == b){
                            count++;
                        }
                    }
                    else if(fichas[i + 1][0] == fichas[i + 2][1]){
                        if(fichas[i + 2][0] == b){
                            count++;
                        }
                    }
                }
            }
        }
        else if((fichas[i][0] != a && fichas[i][1] == b)){ // Si la primera ficha tiene B;
                if(fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][1] == fichas[i][0]){
                    if(fichas[i + 1][0] != fichas[i][0] && fichas[i + 1][1] == fichas[i][0] && fichas[i + 1][0] == a){
                        count++;
                    }
                    else if(fichas[i + 1][0] == fichas[i][0] && fichas[i + 1][1] == a){
                        count++;
                    }
                    else if(fichas[i + 1][0] == fichas[i][0] && fichas[i + 1][1] != a ){ // Le segunda ficha tiene valor 1 == Valor 1 de la primera
                        if(fichas[i + 2][0] == fichas[i + 1][1] || fichas[i + 2][1] == fichas[i + 1][1]){
                            if(fichas[i + 2][0] == a || fichas[i + 2][1] == a){
                                count++;
                            }
                        }
                    }
                }
        }
        else if(fichas[i][0] != a && fichas[i][1] != b){ //Si la primer ficha no tiene A o B;
                if ((fichas[i + 1][0] == a && fichas[i + 1][1] != b)) {
                    if(fichas[i + 1][1] == fichas[i][1]){
                        if(fichas[i + 1][1] == fichas[i][1] && fichas[i][0] == b){
                            count++;
                        }
                        else if(fichas[i + 1][1] == fichas[i][1] && fichas[i][0] != b){
                            if(fichas[i + 2][0] == fichas[i][0] || fichas[i + 2][1] == fichas[i][0]){
                                if(fichas[i + 2][0] == b || fichas[i + 2][1] == b){
                                    count++;
                                }
                            }
                        }
                    }
                }
        }
        else if(fichas[i][0] != a && fichas[i][1] != b && fichas[i + 1][0] != a && fichas[i + 1][1] != b){
                if(fichas[i + 2][0] == a && fichas[i + 2][1] != b){ // Si el primer valor de la ultima ficha es == A;
                    if(fichas[i + 2][1] == fichas[i][0]){ // Si algun valor de la primera ficha es == B;
                        if(fichas[i][1] == b){
                            count++;
                        }
                        else if(fichas[i][1] != b){
                            if(fichas[i][1] == fichas[i + 1][0]){
                                if(fichas[i + 1][1] == b){
                                    count++;
                                }
                            }
                        }
                        else if(fichas[i][1] == fichas[i + 1][1]){
                            if(fichas[i + 1][0] == b){
                                count++;
                            }
                        }
                    }
                }
                else if(fichas[i + 2][1] == fichas[i][1]){
                    if(fichas[i][0] == b){
                        count++;
                    }
                    else if(fichas[i][0] != b){
                        if(fichas[i][0] == fichas[i + 1][0]){
                            if(fichas[i + 1][1] == b){
                                count++;
                            }
                        }
                        else if(fichas[i][1] == fichas[i + 1][1]){
                            if(fichas[i + 1][0] == b){
                                count++;
                            }
                        }
                    }

                }
            }
        }

        cout << count << endl;

        return 0;
}