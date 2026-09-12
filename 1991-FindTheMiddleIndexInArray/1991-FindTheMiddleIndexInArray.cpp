// Last updated: 9/12/2026, 1:04:31 PM
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