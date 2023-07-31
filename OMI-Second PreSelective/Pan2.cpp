/* Link: https://omegaup.com/arena/Yuc_2023_1/#problems/Maquina-Panadera-Arreglada */

#include <iostream>

using namespace std;

int main(){

  long long n;
  long long result;

  cin >> n;

  n = (n * 2) + 1;
  result = ((n * n) / 2) + 1;

  cout << result << endl;

}