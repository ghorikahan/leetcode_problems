// Last updated: 8/18/2026, 4:37:56 PM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int count =0;

        for(int i=1;i<nums.size();i++){
            while(nums[i-1] >=nums[i]){
                nums[i]++;
                count++;
            }
        }

        return count;
    }
};