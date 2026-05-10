// Last updated: 5/10/2026, 6:42:04 PM
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