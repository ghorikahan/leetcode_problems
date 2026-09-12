// Last updated: 9/12/2026, 1:05:57 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i < j) {
                    count++;
                }
            }
        }

        return count;
    }
};