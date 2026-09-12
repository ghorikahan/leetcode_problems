// Last updated: 9/12/2026, 1:03:32 PM
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int avg = 0;
        int count = 0;
        int res = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                avg += nums[i];
                count++;
            }
        }

        if (count != 0) {
            res = avg / count;
        }
        else{
            return 0;
        }

        return res;
    }
};