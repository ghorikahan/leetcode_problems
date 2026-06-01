// Last updated: 6/1/2026, 1:07:40 PM
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (words.size() != s.size())
            return false;
        int i = 0;
        bool isacronym = true;
        while (i < words.size() && i < s.size()) {
            if (words[i][0] == s[i]) {
                i++;
            } else {
                isacronym = false;
                i++;
            }
        }

        return isacronym;
    }
};