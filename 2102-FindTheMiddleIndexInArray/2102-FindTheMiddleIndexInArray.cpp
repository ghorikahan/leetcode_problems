// Last updated: 6/1/2026, 1:08:39 PM
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int index = -1;
        int total = 0;
        int rightsum = 0;
        int leftsum = 0;

        for (int el : nums) {
            total += el;
        }

        for (int i = 0; i < nums.size(); i++) {
            rightsum = total - leftsum - nums[i];
            if (leftsum == rightsum) {
                return i;
            }
            leftsum += nums[i];
        }

        return index;
    }
};