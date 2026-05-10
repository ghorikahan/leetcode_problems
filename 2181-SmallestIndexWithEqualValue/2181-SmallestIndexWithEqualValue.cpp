// Last updated: 5/10/2026, 6:42:34 PM
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