// Last updated: 5/10/2026, 6:43:34 PM
class Solution {
public:
    string reverseWords(string s) {
        vector<string> wordStore;

        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    wordStore.push_back(temp);
                    temp = "";
                }
            }
        }
        if (temp.size() != 0) {
            wordStore.push_back(temp);
        }

        reverse(wordStore.begin(), wordStore.end());

        string res = "";

        for (int i = 0; i < wordStore.size(); i++) {
            res += wordStore[i];
            if (i != (wordStore.size() - 1)) {
                res += " ";
            }
        }

        return res;
    }
};