// Last updated: 9/12/2026, 1:06:28 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            int count = 0;
            for(int j=0;j<nums.size();j++){
                if(j != i && nums[j] < nums[i]){
                    count++;
                }
            }
            res.push_back(count);
        }

        return res;
    }
};