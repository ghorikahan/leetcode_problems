// Last updated: 9/12/2026, 1:02:23 PM
class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;

        for (int i = 0; i < word.size(); ++i) {
            ans += i / 8 + 1;
        }

        return ans;
    }
};