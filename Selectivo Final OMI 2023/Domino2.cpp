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
        if ((fichas[i][0] == a && fichas[i][1] != b)) {
            if(fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1]){
                if(fichas[i + 1][0] != fichas[i][1] && fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] == b){
                    count++;
                }
                else if(fichas[i + 1][0] == fichas[i][1] && fichas[i + 1][1] == b){
                    count++;
                }
                else if(fichas[i + 1][0] == fichas[i][1] || fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] != b && fichas[i + 1][1] != b){
                    if(fichas[i + 2][0] == fichas[i + 1][0] || fichas[i + 2][1] == fichas[i + 1][0]){
                        if(fichas[i + 2][0] == b || fichas[i + 2][1] == b){
                            count++;
                        }
                        else{
                            count == count;
                        }
                    }
                }
            }
        }
        else if((fichas[i][0] != a && fichas[i][1] == b)){
            if(fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][1] == fichas[i][0]){
                if(fichas[i + 1][0] != fichas[i][0] && fichas[i + 1][1] == fichas[i][0] && fichas[i + 1][0] == a){
                    count++;
                }
                else if(fichas[i + 1][0] == fichas[i][0] && fichas[i + 1][1] == a){
                    count++;
                }
                else if(fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][1] == fichas[i][0] && fichas[i + 1][0] != a && fichas[i + 1][1] != a){
                    if(fichas[i + 2][0] == fichas[i + 1][0] || fichas[i + 2][1] == fichas[i + 1][0]){
                        if(fichas[i + 2][0] == a || fichas[i + 2][1] == a){
                            count++;
                        }
                        else{
                            count == count;
                        }
                    }
                }
            }
        }
        else if((fichas[i][0] != a && fichas[i][1] != b)){
            if(fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][1] == fichas[i][0] && fichas[i + 1][1] == a || fichas[i + 1][1] == a){
                if(fichas[i + 1][0] != fichas[i][0] && fichas[i + 1][0] == fichas[i][0]){
                    if(fichas[i + 2][0] == fichas[i][1] || fichas[i + 2][1] == fichas[i][1]){
                        if(fichas[i + 2][0] == a || fichas[i + 2][1] == a){
                            count++;
                        }
                        else{
                            count == count;
                        }
                    }
                }
                else if(fichas[i + 1][1] == fichas[i][0] || fichas[i + 1][1] == fichas[i][1] && fichas[i + 1][0] == a || fichas[i + 1][0] == a)
                    if(fichas[i + 2][0] == fichas[i][1] || fichas[i + 2][1] == fichas[i][1]){
                        if(fichas[i + 2][0] == b || fichas[i + 2][1] == a){
                            count++;
                        }
                        else{
                            count == count;
                        }
                    }
                }
                else if(fichas[i + 1][0] == fichas[i][0] || fichas[i + 1][1] == fichas[i][0] && fichas[i + 1][0] != a && fichas[i + 1][1] != a){
                    if(fichas[i + 2][0] == fichas[i + 1][0] || fichas[i + 2][1] == fichas[i + 1][0]){
                        if(fichas[i + 2][0] == a || fichas[i + 2][1] == a){
                            count++;
                        }
                        else{
                            count == count;
                        }
                    }
                }
            }
        }

        cout << count << endl;

        return 0;
}
