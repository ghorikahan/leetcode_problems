// Last updated: 9/12/2026, 1:07:15 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]*nums[i]);
        }

        sort(res.begin(),res.end());

        return res;
    }
};