// Last updated: 5/21/2026, 2:33:30 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res;
        vector<int> evenarr;
        vector<int> oddarr;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                evenarr.push_back(nums[i]);
            } else if (nums[i] % 2 != 0) {
                oddarr.push_back(nums[i]);
            }
        }

        evenarr.insert(evenarr.end(), oddarr.begin(), oddarr.end());

        return evenarr;
    }
};