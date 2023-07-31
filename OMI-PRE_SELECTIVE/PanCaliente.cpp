#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long chefs, seconds;

    cin >> chefs >> seconds;

    chefs = chefs + 1;

    long long pass[chefs];
    long long bread, count;

    if(chefs <= 0 || seconds ==0){
        cout << "Jorge" << endl;
        return 0;
    }
    else{
        int e = 0;
        for(int i = 0; i < seconds; i++){
            for(; e < chefs; e++){
                bread = pass[i];
                count++;
            }
            if(e == chefs){
                for(int o = i; o < seconds; o++){
                    e--;
                    count--;
                }
            }
        }
        if(count == 0){
            cout << "Jorge" << endl;
            return 0;
        }
        else{
            cout << count << endl;
            return 0;
        }
    }
}