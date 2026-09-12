// Last updated: 9/12/2026, 1:01:45 PM
class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> digitarr;

        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int digit = 0;

            while (temp > 0) {
                digit += temp%10;
                temp = temp / 10;
            }

            digitarr.push_back(digit);
        }

        int min = digitarr[0];

        for (int el : digitarr) {
            if (min > el) {
                min = el;
            }
        }

        return min;
    }
};