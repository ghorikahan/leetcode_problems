// Last updated: 5/10/2026, 6:41:59 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    res.push_back(nums[i]);
                }
            }
        }

        return res;
    }
};