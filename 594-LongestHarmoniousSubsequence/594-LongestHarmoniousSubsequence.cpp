// Last updated: 8/5/2026, 5:59:22 PM
class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> freq;
        int ans = 0;
        for (auto k : nums) {
            freq[k]++;
        }
        for (auto k : freq) {
            if (freq.count(k.first + 1)) {
                int currLen = k.second + freq[k.first + 1];
                ans = max(ans, currLen);
            }
        }
        return ans;
    }
};