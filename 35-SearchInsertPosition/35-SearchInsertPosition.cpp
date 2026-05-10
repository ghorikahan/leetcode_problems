// Last updated: 5/10/2026, 6:43:45 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                index = i;
            }
        }

        if (index == -1) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] > target) {
                    index = j;
                    break;
                }
                else{
                    index = j+1;
                }
            }
        }

        return index;
    }
};