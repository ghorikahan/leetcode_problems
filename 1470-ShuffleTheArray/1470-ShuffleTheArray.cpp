// Last updated: 9/12/2026, 1:06:08 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int i=0;
        int j=n;

        while(i < nums.size()/2){
            res.push_back(nums[i]);
            res.push_back(nums[j]);

            i++;
            j++;
        }

        return res;
    }
};