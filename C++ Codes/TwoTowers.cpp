#include <iostream>
#include <string>

using namespace std;

int main() {
    long long l;
    int n, m;
    int s, t;

    cin >> l;

    for(int a = 0; a < l; a++) {
        cin >> n >> m;

        char firsttower[n];
        char secondtower[m];

        for(int j = 0; j < n; j++) {
            cin >> firsttower[j];
        }

        for(int e = 0; e < m; e++) {
            cin >> secondtower[e];
        }

        if(firsttower[0] == firsttower[1]) {
            for(int i = 0, n = n-1; i < n; i++, n--) {
                while(firsttower[i] == firsttower[i + 1] && i < n){
                    secondtower[m++] = firsttower[n];
                    n--;
                }
            }
        }
        else if(secondtower[0] == secondtower[1]) {
            for(int i = 0, m = m-1; i < m; i++, m--) {
                while(secondtower[i] == secondtower[i + 1] && i < m){
                    firsttower[n++] = secondtower[m];
                    m--;
                }
            }
        }

        if(firsttower[0] != firsttower[1] && secondtower[0] != secondtower[1]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

