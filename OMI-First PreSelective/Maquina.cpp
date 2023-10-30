#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // número de pasos

    long long bandejas = 9; // número de bandejas llenadas después del primer paso
    long long panes = 9; // incremento en el número de bandejas llenadas por cada paso

    for (int i = 2; i <= n; i++) {
        panes *= 10;
        bandejas += panes;
    }

    cout << bandejas << endl;
    return 0;
}
