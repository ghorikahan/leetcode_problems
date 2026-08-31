// Last updated: 8/31/2026, 5:18:09 PM
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int diff = 0;

        for (int i = 0; i < s.size(); i++) {
            char str = s[i];
            int j = t.find(str);
            diff += abs(j - i);
        }

        return diff;
    }
};