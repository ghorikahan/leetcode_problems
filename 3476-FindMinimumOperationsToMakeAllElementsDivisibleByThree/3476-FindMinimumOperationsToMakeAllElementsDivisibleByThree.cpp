// Last updated: 5/10/2026, 6:42:00 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%3 != 0){
                count++;
            }
        }

        return count;
    }
};