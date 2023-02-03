#include <iostream>

using namespace std;

int main(){

    long long secs; // 13
    long long udistance; // 5
    long long sup; 
    long long sflat; 
    long long sdown; 
    int up = 'U'; // 3
    int flat = 'F'; // 2
    int down = 'D'; // 1


    cin >> secs >> udistance >> sup >> sflat >> sdown;

    int distance = udistance[up, flat, down];

    cin >> up >> flat >> down;

    distance = udistance.sum[up, flat, down];

    for(int counter = 0; counter <= distance; counter++){

        int result = secs - distance;
        if(result >= 0){
            cout << result;
        }
        else{
            cout << '0';
        }
        
    }
    
    


}
