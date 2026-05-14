// Last updated: 5/14/2026, 9:20:54 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = (nums[0] - 1) * (nums[1]-1);

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if((nums[i]-1)*(nums[j]-1)>res){
                    res = (nums[i]-1)*(nums[j]-1);
                }
            }
        }

        return res;
    }
};