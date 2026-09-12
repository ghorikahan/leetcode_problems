// Last updated: 9/12/2026, 1:03:08 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res;

        int total = 0;

        int leftsum = 0;

        for (int num : nums) {
            total += num;
        }

        for (int i = 0; i < nums.size(); i++) {
            int rightsum = total - leftsum - nums[i];

            res.push_back(abs(leftsum - rightsum));

            leftsum += nums[i];
        }

        return res;
    }
};