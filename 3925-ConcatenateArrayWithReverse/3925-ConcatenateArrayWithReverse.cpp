// Last updated: 9/12/2026, 1:00:36 PM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--){
            nums.push_back(nums[i]);
        }

        return nums;
    }
};