// Last updated: 5/10/2026, 6:43:51 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = 1;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] != target) {
                    continue;
                }
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }

        return res;
    }
};