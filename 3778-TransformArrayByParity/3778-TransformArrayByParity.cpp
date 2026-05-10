// Last updated: 5/10/2026, 6:41:56 PM
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                res.push_back(0);
            } else {
                res.push_back(1);
            }
        }

        sort(res.begin(), res.end());

        return res;
    }
};