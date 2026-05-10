// Last updated: 5/10/2026, 6:42:38 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[nums[i]]);
        }

        return res;
    }
};