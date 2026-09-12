// Last updated: 9/12/2026, 1:04:10 PM
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i%10 == nums[i]){
                return i;
            }
        }

        return -1;
    }
};