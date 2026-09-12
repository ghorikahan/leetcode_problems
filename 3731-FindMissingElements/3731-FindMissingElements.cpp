// Last updated: 9/12/2026, 1:01:04 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());

        sort(nums.begin(),nums.end());

        int j=0;

        for(int i=min;i<max;i++){
            if(j<nums.size() && nums[j] == i){
                j++;
            }else {
                res.push_back(i);
            }
        }

        return res;

    }
};