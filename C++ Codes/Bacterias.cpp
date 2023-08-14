#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;

    cin >> t;

    long long total_bacterias = 1; 

    for (int i = 0; i < t; i++) {
        total_bacterias = 2 * total_bacterias + 1; 
    }

    cout << total_bacterias << endl;

    return 0;
}