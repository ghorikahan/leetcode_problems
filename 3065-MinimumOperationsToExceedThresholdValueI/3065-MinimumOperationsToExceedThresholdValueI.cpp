// Last updated: 9/12/2026, 1:02:19 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= k) {
                continue;
            } else {
                count++;
            }
        }

        return count;
    }
};