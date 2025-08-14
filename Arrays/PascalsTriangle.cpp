#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int row = numRows;
        vector<int> resRow;
        vector<vector<int>> result;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0)
                    resRow.push_back(1);
                else if (j == i)
                    resRow.push_back(1);
                else if (j > 0 && j < i)
                    resRow.push_back(result[i - 1].at(j - 1) + result.at(i - 1).at(j));
            }
            result.push_back(resRow);
            resRow.clear();
        }
        return result;
    }
};

int main() {
    Solution sol;
    int numRows = 6;  // You can change this value
    vector<vector<int>> triangle = sol.generate(numRows);

    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}