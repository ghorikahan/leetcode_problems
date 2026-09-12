// Last updated: 9/12/2026, 1:02:11 PM
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