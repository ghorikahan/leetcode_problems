// Last updated: 9/12/2026, 1:00:37 PM
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            int mini = INT_MAX;
            int maxi = INT_MIN;
            int sum = 0;

            for (int j = 0; j <= i; j++) {
                maxi = max(maxi, nums[j]);
            }
            for (int k = i; k < n; k++) {
                mini = min(mini, nums[k]);
            }
            sum = maxi - mini;

            if (sum <= k) {
                return i;
            }
        }
        
        return -1;
    }
};