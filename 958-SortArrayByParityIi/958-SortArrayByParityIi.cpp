// Last updated: 5/10/2026, 6:43:10 PM
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = 0;
        int j = 1;

        for (int k = 0; k < nums.size(); k++) {
            if (nums[k] % 2 == 0) {
                res[i] = nums[k];
                i += 2;
            } else {
                res[j] = nums[k];
                j += 2;
            }
        }

        return res;
    }
};