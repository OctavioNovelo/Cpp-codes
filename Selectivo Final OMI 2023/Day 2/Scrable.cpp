#include <bits/stdc++.h>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream inputFile("C:\\Users\\octav\\Desktop\\Pepina"); 
    
    vector<string> nombres;
    string c;
    
    while (getline(inputFile, c)) {
        nombres.push_back(c);
    }

    inputFile.close();
    
    int sumaTotal;
    int sumaNombre[c.size()];
    
    for (int i = 0; i < nombres.size(); ++i) {  
        for(int e = 0; e < sizeof(c); e++){
            sumaNombre[e] = (int)c[e];
        }
        for(int k = 0; k < sizeof(sumaNombre); k++){
            sumaTotal += sumaNombre[k] * (i + 1); 
        }
    }

    string sumaTotalStr = to_string(sumaTotal);
     
    
    for (int i = 0; i < sumaTotalStr.size(); i++) {  // Cambio sizeof(sumaTotalStr) a sumaTotalStr.size()
       if(sumaTotalStr.size())
    } 
    return 0;
}
