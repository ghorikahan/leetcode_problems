// Last updated: 5/10/2026, 6:43:08 PM
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