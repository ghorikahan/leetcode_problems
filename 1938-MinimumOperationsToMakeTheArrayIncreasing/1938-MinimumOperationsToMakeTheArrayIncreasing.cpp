// Last updated: 8/18/2026, 4:36:44 PM
class Solution {
public:
    long long minOperations(vector<int>& nums) {
        int ans = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                ans += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }

        return ans;
    }
};