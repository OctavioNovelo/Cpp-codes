#include <iostream>
using namespace std;

int main() {
    int base;
    cin >> base;

    for (int i = 1; i <= base; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
