/* Link: https://omegaup.com/arena/Yuc_2023_1/#problems/El-amigo-favorito */
#include <iostream>

using namespace std;

int main() {
    long long  D;
    long long  N;
    long long  K;

    long long answer = 0;

    cin >> N >> D >> K;

    if (D < K) {
        cout << 0 << endl;
        return 0;
    }
    else {
        answer += 1;
        D -= N;

        long long left = K;
        long long right = K;

        while (D > 0) {
            answer += 1;
            D -= (right - left + 1);
            left -= 1;
            if (left < 0) {
                left = 0;
            }
            right += 1;
            if (right > N - 1) {
                right = N - 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}