#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> generateRow(int row) {  
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1); 

        for (int col = 1; col < row; col++) {
            ans = ans * (row - col); 
            ans = ans / col;         
            ansrow.push_back(ans);
        }
        return ansrow;
    }

    vector<vector<int>> generate(int numRows) { 
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
/* to find the element in R th row and C th column is (R-1)Combination(C-1)
 fun n C r (n-1 ,r -1){
    for(int i=0;i<r;i++){
        res = res*(n-1);
        res = res/(i+1);
    }
} */
