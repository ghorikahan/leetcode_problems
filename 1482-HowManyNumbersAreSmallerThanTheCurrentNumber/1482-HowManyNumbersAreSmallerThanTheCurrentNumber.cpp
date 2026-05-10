// Last updated: 5/10/2026, 6:43:00 PM
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