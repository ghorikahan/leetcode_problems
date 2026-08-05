// Last updated: 8/5/2026, 5:57:03 PM
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count = 0;

        for (int a = 0; a < nums.size() - 3; a++) {
            for (int b = a + 1; b < nums.size() - 2; b++) {
                for (int c = b + 1; c < nums.size() - 1; c++) {
                    for (int d = c + 1; d < nums.size(); d++) {
                        if (nums[a] + nums[b] + nums[c] ==
                                nums[d] && a < b < c < d){
                                    count++;
                                }
                    }
                }
            }
        }

        return count;
    }
};