#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t, count = 0;

    cin >> t;

    char parentesis[1000];

    for(int i = 0; i < t; i++){
        cin >> parentesis[i];
    }

    for(int i = 0; i < t; i++){
        for(int e = 0; e < sizeof(parentesis); e++){
            if(parentesis[i] == '[' || parentesis[i] == '{' || parentesis[i] == '(' && parentesis[i + 1] == ']' || parentesis[i + 1] == '}' || parentesis[i + 1] == ')' && parentesis[i + 2] == '[' || parentesis[i + 2] == '{' || parentesis[i + 2] == '('){
                count++;
            }
            else{
                count = count;
            }
        }
        if(count >= 1){
            cout << "NO" << endl;
            count = 0;
        }
        else{
            cout << "SI" << endl;
        }
    }



    return 0;

}