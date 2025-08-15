#include <bits/stdc++.h>
using namespace std;


// //this code dosnt handle remove duplicate cases
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> result;
//         int n = nums.size();

//         for(int i = 0; i < n; i++) {
//             for(int j = i + 1; j < n; j++) {
//                 for(int k = j + 1; k < n; k++) {
//                     if(nums[i] + nums[j] + nums[k] == 0) {
//                         result.push_back({nums[i], nums[j], nums[k]});
//                     }
//                 }
//             }
//         }

//         return result;
//     }
// };




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
   
    }
};




int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = sol.threeSum(nums);

    cout << "Unique triplets that sum to zero:\n";
    for(const auto& triplet : result) {
        cout << "[";
        for(int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if(i < triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}