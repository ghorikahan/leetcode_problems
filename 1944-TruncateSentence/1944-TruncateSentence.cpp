// Last updated: 5/21/2026, 2:33:04 PM
class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> res;
        string result = "";
        string str = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                res.push_back(str);
                str = "";
            } else {
                str += s[i];
            }
        }

        res.push_back(str);

        for (int j = 0; j < k && j < res.size(); j++) {
            if (j == k - 1) {
                result += res[j];
                continue;
            } else {
                result += res[j];
                result += " ";
            }
        }

        return result;
    }
};