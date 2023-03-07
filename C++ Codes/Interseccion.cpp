#include <iostream>

using namespace std;

int main(){

    long long a[2];
    long long b[2];
    long long count;

    for(int i = 0; i < 2;i++){
        cin >> a[i];
    }
    for(int i = 0; i < 2; i++){
        cin >> b[i];
    }

    for(int i = 0; i < 5; i++){
        if(a[i] == b[i]){
            count++;
        }
    }

    if(count > 0){
        cout << "1" << endl;
        return 0;
    }
    else{
        cout << "0" << endl;
        return 0;
    }
}


/*
  cin >> a >> b;
    cin >> a1 >> b1;

    if(Numeros1 == Numeros2){
        cout << "1 \n";
    }
    else{
        cout << "0 \n";
    }
}
*/