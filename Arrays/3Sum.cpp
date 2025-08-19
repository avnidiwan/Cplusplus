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





// //this code handles remove duplicate cases but cant handle large inputs efficiently
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {  
//         set<vector<int>> s;
//         int n=nums.size();
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k=j+1; k<n; ){
//                     if(nums[i] + nums[j] + nums[k] == 0){
//                      vector<int> triplet= {nums[i] , nums[j] , nums[k]};
//                      sort(triplet.begin(), triplet.end());
//                      s.insert(triplet);
//                         k++;
//                     }
//                     else k++;
//                 }
//             }
//         }
//        vector<vector<int>> res(s.begin(), s.end());
//      return res;   
//     }
// };




// //better solution, this approach brings complexity to n^2 by removing the third loop
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {  
//        int n=nums.size();
//        set<vector<int>> s;
//        for(int i=0; i<n; i++){
//          set<int> hashset;
//          for(int j=i+1;j<n; j++){
//             int third=-(nums[i]+nums[j]);
//             if(hashset.find(third) != hashset.end()){
//                 vector<int> triplet={nums[i],nums[j], third};
//                 sort(triplet.begin(), triplet.end());
//                 s.insert(triplet);
//             }
//                hashset.insert(nums[j]);
//             }
//        }
//        vector<vector<int>> res(s.begin(), s.end());
//        return res;
//     }
// };




//optimal solution using two pointers approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {  
       int n=nums.size();
       vector<vector<int>> res;
      sort(nums.begin(), nums.end());
      for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum= nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> triplet= { nums[i], nums[j], nums[k]} ;
                res.push_back(triplet);
                j++;
                k--;
                while(j<k && nums[j]== nums[j-1]) j++;
                while(j<k && nums[k]== nums[k+1]) k--;
            }
        }   
      }
      return res;
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