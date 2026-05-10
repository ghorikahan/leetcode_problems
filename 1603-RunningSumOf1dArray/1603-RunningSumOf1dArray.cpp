// Last updated: 5/10/2026, 6:42:56 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            int sum = nums[i];
            for (int j = 0; j < i; j++) {
                sum += nums[j];
            }
            arr.push_back(sum);
        }

        return arr;
    }
};