#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int count = 0;
    cin >> N;

    vector<int> deck(N);

    for (int i = 0; i < N; i++) {
        cin >> deck[i];
    }

    for(int i = 0; i < N; i++){
        if(deck[i] == deck[i + 1]){
            count++;
        }
    }

    if(count == N){
        for(int i = 0; i < N; i++){
            cout << deck[0] << " ";
        }
        cout << endl;
        return 0;
    }
    
    int M;
    cin >> M;

    int middle = N / 2;
    vector<int> new_deck(N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < middle; j++) {
            new_deck[2 * j] = deck[j];
            new_deck[2 * j + 1] = deck[j + middle];
        }
    }

    for (int i = 0; i < N; i++) {
        cout << new_deck[i] << " "; 
    }

    cout << endl;

    return 0;
}





