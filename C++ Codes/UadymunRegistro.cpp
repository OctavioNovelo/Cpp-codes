#include <iostream>

using namespace std;

int main(){

    long long people = 0;
    long long expected = 0;

    cout << "How many people you expect to have ? " << endl;
    cin >> expected;

    string names[expected];

    while(expected > 0){
        for(int i = 0; i < expected; i++){
            getline(cin, names[i]);
            people += i;
            if(names[i] == "exit"){
                i - 1;
                cout << "You got" << " " << people << " " << "people." << endl;
                return 0;
            }
            if(i == expected){
                i = 0;
            }
        }
    }
}