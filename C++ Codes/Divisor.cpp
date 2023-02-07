#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long a, b, c;

    cin >> a >> b >> c;

    if(a / b == 1 && a / c == 1){

        cout << a;
    }
    else if(b / a == 1 && b / c == 1){

        cout << b;
    }
    else if(c / a == 1 && c / b == 1){

        cout << c;
    }
    else{

        cout << "-1";

    }

}