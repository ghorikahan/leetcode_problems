// Last updated: 5/10/2026, 6:41:48 PM
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int num = 0;
        int evenIndex = 0;
        int oddIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                evenIndex = evenIndex + nums[i];
            } else {
                oddIndex = oddIndex + nums[i];
            }
        }
        num = evenIndex-oddIndex;

        return num;
    }
};