#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long ans = 1;  

        for (int i = 0; i <= rowIndex; i++) {
            row.push_back(ans);
            ans = ans * (rowIndex - i) / (i + 1);  // next binomial coefficient
        }
        return row;
    }
};
