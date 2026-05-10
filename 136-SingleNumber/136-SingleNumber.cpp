// Last updated: 5/10/2026, 6:43:36 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i+=2) {
            if (nums[i] != nums[i + 1]) {
            return nums[i];
            }
        }

        return nums.back();
    }
};