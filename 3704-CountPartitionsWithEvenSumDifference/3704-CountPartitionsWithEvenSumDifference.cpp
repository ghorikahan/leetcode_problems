// Last updated: 6/1/2026, 1:07:10 PM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int total = 0;

        for (int el : nums) {
            total += el;
        }

        int leftsum = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            leftsum += nums[i];              
            int rightsum = total - leftsum;  

            if (abs(leftsum - rightsum) % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};