#include <bits/stdc++.h>

using namespace std;

int min_money(int num_cats, vector<vector<int>>& cat_lists) {
    vector<int> count(num_cats + 1, 0);
    
    for (int i = 0; i < num_cats; ++i) {
        for (int j = 1; j < cat_lists[i].size(); ++j) {
            count[cat_lists[i][j]]++;
        }
    }
    
    int minmoney = 0;
    for (int i = 1; i <= num_cats; ++i) {
        
        if (count[i] == 0) {
            minmoney++;
        }
    }
    
    return minmoney;
}

int main() {
    int cats;
    cin >> cats;
    
    vector<vector<int>> cat_lists(cats);
    for (int i = 0; i < cats; ++i) {
        int list_size;
        cin >> list_size;
        
        cat_lists[i].resize(list_size);
        for (int j = 0; j < list_size; ++j) {
            cin >> cat_lists[i][j];
        }
    }
    
    int result = min_money(cats, cat_lists);
    cout << result << endl;
    
    return 0;
}
