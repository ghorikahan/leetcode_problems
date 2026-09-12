// Last updated: 9/12/2026, 1:04:36 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[i]);
        }

        return res;
    }
};