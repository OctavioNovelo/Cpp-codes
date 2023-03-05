#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, time; // 2 <= n <= 1000   1 <= time <= 1000
    long long person;

    cin >> n >> time;
    long long people[n];

        while(time >= 0){
            for(int i = 0; i < n; i++){
                person += people[i];
                time--;
                if(time >= 0 && i == n-1){
                    for(;time <= 0; i--){
                        person += people[i];
                    }
                }
            }
        }
    
        long long total = sizeof(person) / sizeof(long long);
    
        printf("%lld", total + 1);

        return total;

}

/* class Solution {
public:
    int passThePillow(long long n, long long time) {
        using namespace std;

        long long person = 0;
        
        long long people[n];
        
        while(time >= 0){
            for(int i = 0; i < n; i++){
                person += people[i];
                time--;
                if(time >= 0 && i == n-1){
                    for(;time <= 0; i--){
                        person += people[i];
                    }
                }
            }
        }
    
        long long total = sizeof(person) / sizeof(long long);
    
        printf("%lld", total + 1);

        return total;
    }
}; */