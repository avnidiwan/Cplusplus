#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        for (int a = 0; a < n; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            for (int b = a + 1; b < n - 2; b++) {
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;

                int c = b + 1;
                int d = n - 1;
                while (c < d) {
                    long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d];
                    if (sum < target) {
                        c++;
                    } else if (sum > target) {
                        d--;
                    } else {
                        res.push_back({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;
                        while (c < d && nums[c] == nums[c - 1]) c++;
                        while (c < d && nums[d] == nums[d + 1]) d--;
                    }
                }
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = sol.fourSum(nums, target);

    cout << "Quadruplets that sum to " << target << ":\n";
    for (const auto& quad : result) {
        cout << "[";
        for (int i = 0; i < quad.size(); ++i) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}