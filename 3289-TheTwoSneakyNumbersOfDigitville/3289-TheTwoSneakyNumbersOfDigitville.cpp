// Last updated: 9/12/2026, 1:01:52 PM
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