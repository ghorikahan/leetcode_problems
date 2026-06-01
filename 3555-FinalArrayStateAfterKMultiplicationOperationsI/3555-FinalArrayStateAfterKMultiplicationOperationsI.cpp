// Last updated: 6/1/2026, 1:07:20 PM
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int index = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[index] > nums[i]) {
                    index = i;
                }
            }

            nums[index] = nums[index] * multiplier;
        }

        return nums;
    }
};