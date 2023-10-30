#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, k;

    cin >> n >> k;

    string cartaactual;
    long long mano = 1;

    if(k == 1){
        for(int i = 0; i < n - 1; i++){
            cartaactual += 'I';
            mano++;
        }
        cout <<  cartaactual << endl;
        return 0;
    }
    if(k > 1){
        if((mano += mano + mano) > n ){
            if(((mano += mano + mano) - n) == 1){
                cartaactual += 'B';
                mano--;
            }
            else if(((mano += mano + mano) - n) > 1){
                long long exceso = (mano + mano) - n;
                for(int i = 0; i < exceso; i++){
                    if(exceso > 1){
                        while(exceso > 0);
                        mano = 1;
                        cartaactual += 'S';
                        mano += mano + 1;
                        if(mano == n){
                            cout << cartaactual << endl;
                            return 0;
                        }
                        else if((mano - n) > 2){
                            for(;mano < n; mano++){
                                cartaactual += 'I';
                            }
                            cout << cartaactual << endl;
                            return 0;
                        }
                    }
                }
            }
            cartaactual += 'I';
            mano++;
        }
        else if((mano += mano + mano) < n){
            cartaactual += 'S';
            mano *= 2;
        }
        else if((mano += mano + mano) == n){
            cartaactual += 'S';
            for(int i = 0; i < n; i++){
                cout << cartaactual;
            }
            return 0;
        }

    }
}

