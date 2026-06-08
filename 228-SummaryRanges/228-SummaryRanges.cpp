// Last updated: 6/8/2026, 10:56:02 PM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int j = a;
            while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
                j = nums[i + 1];
                i++;
            }
            if (a == j) {
                res.push_back(to_string(a));
            } else {
                string range = to_string(a) + "->" + to_string(j);
                res.push_back(range);
            }
        }
        return res;
    }
};