#include <bits/stdc++.h>

using namespace std;

int main(){

    long long cats;

    cin >> cats;

    long long players[cats][cats];

    for(int i = 0; i < cats; i++){
        cin >> players[i][0];
        for(int e = 0; e < players[i][0]; e++){
            cin >> players[i][e];
        }
    }

    long long bucket[cats];

    for(int i = 0; i < cats; i++){
        if(players[i][0] == 1){
            if(players[i][1] == 1){
                bucket[i + 1];
            }
        }
        else if(players[i][0] > 1){
            for(int e = 1; i < players[i][0]; i++){
                if(players[i][e] == 2){
                    bucket[e + 1];
                }
                else if(players[i][e] > sizeof(bucket)){
                    bucket[cats - 1] + 1;
                    bucket[(cats - 1) + 1];
                }
            }
        }
    }

}