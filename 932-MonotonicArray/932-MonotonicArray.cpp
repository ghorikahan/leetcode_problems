// Last updated: 6/1/2026, 1:09:15 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]){
                increasing = false;
            }
            else if(nums[i] < nums[i+1]){
                decreasing = false;
            }
        }

        return increasing || decreasing;
    }
};