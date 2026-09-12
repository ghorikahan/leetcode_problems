// Last updated: 9/12/2026, 1:03:02 PM
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;
        int index = 0;

        for (int i = 0; i < k; i++) {
            int max = nums[0];
            for (int j = 0; j < nums.size(); j++) {
                if (max < nums[j]) {
                    max = nums[j];
                    index = j;
                }
            }
            sum += max;
            nums.erase(nums.begin()+index);
            nums.push_back(max + 1);
        }

        return sum;
    }
};