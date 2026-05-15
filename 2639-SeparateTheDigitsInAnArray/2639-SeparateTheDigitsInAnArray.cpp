// Last updated: 5/15/2026, 11:20:08 PM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 9) {
                vector<int> temp;
                int x = nums[i];
                while (x) {
                    temp.push_back(x % 10);
                    x /= 10;
                }

                reverse(temp.begin(), temp.end());

                for (int d : temp) {
                    res.push_back(d);
                }
            } else {
                res.push_back(nums[i]);
            }
        }

        return res;
    }
};