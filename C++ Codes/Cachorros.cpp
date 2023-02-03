#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c, p, h;
    cin >> c >> p >> h;
    cout << p + (c - p) % (h + 1);
}