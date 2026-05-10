// Last updated: 5/10/2026, 6:43:26 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        int missing;
        for(int i=0;i<=max;i++){
            if(nums[i] == i){
                continue;
            }else{   
                missing = i;
                break;
            }
        }

        return missing;

    }
};