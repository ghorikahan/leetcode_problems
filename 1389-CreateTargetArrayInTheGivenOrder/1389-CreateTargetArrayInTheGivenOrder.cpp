// Last updated: 9/12/2026, 1:06:26 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        int j=0;
        for(int i=0;i<nums.size();i++){
            res.insert(res.begin()+index[j],nums[i]);
            j++;
        }

        return res;
    }
};