// Last updated: 6/2/2026, 2:44:02 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum = 0;
        int digitsum = 0;

        for (int el : nums) {
            elementsum += el;
        }

        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            while (temp > 0) {
                digitsum += temp % 10;
                temp /= 10;
            }
        }

        int res = abs(elementsum - digitsum);

        return res;
    }
};