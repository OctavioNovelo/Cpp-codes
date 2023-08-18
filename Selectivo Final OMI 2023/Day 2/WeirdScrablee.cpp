// Link: https://omegaup.com/arena/OMIYUC2023_FINAL_2/practice/#problems/Skip-A-Cross
//100% 
#include <bits/stdc++.h>

using namespace std;
int n, x = 1;
long long sum[100000000], sum2=0;
string word;

int main (){

ios_base::sync_with_stdio(0);
cin.tie(0);

ifstream inputFile("Main.in"); 
inputFile >> n;

vector<string> palabra;
for(int i = 0; i<n; i++){
    inputFile >> word;
        palabra.push_back(word);
}
sort(palabra.begin(),palabra.end());
for(int i = 0; i<n; i++){
            word=palabra[i];
            for(int j = 0; j< word.size(); j++){
                sum[i] += word[j];
            }
            sum[i] *= x;
            x++;
}
for(int i = 0; i<n; i++){
    sum2 += sum[i];
}

cout << sum2 << endl;

}