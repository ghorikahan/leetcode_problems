// Last updated: 5/10/2026, 6:42:54 PM
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