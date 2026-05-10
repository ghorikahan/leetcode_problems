// Last updated: 5/10/2026, 6:43:49 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int i = 0;
        int check = x;
        string nums = to_string(x);
        int j = nums.length() - 1;

        while (i < j) {
            if (nums[i] == nums[j] && check > 0) {
                i++;
                j--;
                continue;
            } else {
                return false;
            }
        }

        return true;
    }
};