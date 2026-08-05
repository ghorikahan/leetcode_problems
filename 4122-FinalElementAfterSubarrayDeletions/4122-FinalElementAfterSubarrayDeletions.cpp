// Last updated: 8/5/2026, 5:54:58 PM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums[0], nums[nums.size() - 1]);
    }
};