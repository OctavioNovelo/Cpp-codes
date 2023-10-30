/* Link: https://omegaup.com/arena/simup1/#problems/Oro-del-sabio */

// 75% TLE

#include <iostream>
using namespace std;

int main() {

ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while(q--) {
        int l, r, x;
        cin >> l >> r >> x;
        for (int i = l - 1; i < r; i++) {
            a[i] += x;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}