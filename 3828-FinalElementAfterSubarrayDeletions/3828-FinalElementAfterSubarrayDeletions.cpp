// Last updated: 9/12/2026, 1:00:58 PM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums[0], nums[nums.size() - 1]);
    }
};