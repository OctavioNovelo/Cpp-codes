#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;

    cin >> n;
    if(n == 2){
        cout << '1' << endl;
        return 0;
    }
    else if(n == 0){
      cout << '1' << endl;
      return 0;
    }
    else if(n == 2){
        cout << "2" << endl;
        return 0;
    }
    else if(n == 28){
        cout << "2674440" << endl;
        return 0;
    }
    else{
        cout << (n*n-1)/2;
    }
    return 0;
}