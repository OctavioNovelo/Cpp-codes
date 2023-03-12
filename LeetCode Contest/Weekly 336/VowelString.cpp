/* Link: https://leetcode.com/contest/weekly-contest-336/problems/count-the-number-of-vowel-strings-in-range/ */

#include <bits/stdc++.h>

using namespace std;

int main(){

    long long left, right, count = 0;

    string word[10];

    for(int i = 0; i < 10; i++){
        cin >> word[i];
    }

    cin >> left >> right; 

    while(left < right){
        int i = 0;
       if (word[0] == "a" || word[0] == "e" || word[0] == "i" || word[0] == "o" || word[0] == "u") {
            int lenght = word[i].length();
            if(word[lenght] == "a" || word[lenght] == "e" || word[lenght] == "i" || word[lenght] == "o" || word[lenght] == "u"){
                count++;
            } 

            i++;
       }
    }

    cout << count << endl;
}
