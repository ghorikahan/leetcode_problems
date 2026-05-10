// Last updated: 5/10/2026, 6:42:39 PM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max = INT_MIN; int max2 = INT_MIN;
        int min = INT_MAX; int min2 = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max2 = max;
                max = nums[i];
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
            if (nums[i] < min) {
                min2 = min;
                min = nums[i];
            } else if (nums[i] < min2) {
                min2 = nums[i];
            }
        }

        int res = (max * max2) - (min * min2);

        return res;
    }
};