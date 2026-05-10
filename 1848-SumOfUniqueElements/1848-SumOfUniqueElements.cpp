// Last updated: 5/10/2026, 6:42:42 PM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i != j) {
                    count++;
                    continue;
                }
            }

            if (count == 0) {
                res.push_back(nums[i]);
            }
        }

        for (int k = 0; k < res.size(); k++) {
            sum += res[k];
        }

        return sum;
    }
};