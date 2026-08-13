// Last updated: 8/13/2026, 10:37:44 AM
class Solution {
public:
    string reverseWords(string s) {
        vector<string> res;
        string strRes = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                res.push_back(strRes);
                strRes = "";
            }
            else{
            strRes += s[i];
            }
        }
        res.push_back(strRes);

        string mainRes = "";

        for (int i = 0; i < res.size(); i++) {
            reverse(res[i].begin(), res[i].end());
            mainRes += res[i];
            if (i != res.size()-1) {
                mainRes += " ";
            }
        }

        return mainRes;
    }
};