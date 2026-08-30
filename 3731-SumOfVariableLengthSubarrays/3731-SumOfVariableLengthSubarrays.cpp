// Last updated: 8/30/2026, 7:10:16 PM
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        int s, sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            s = max(0, i - nums[i]);
            for (int j = s; j <= i; j++) {
                sum += nums[j];
            }
        }

        return sum;
    }
};