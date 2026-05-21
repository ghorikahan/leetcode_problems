// Last updated: 5/21/2026, 2:33:19 PM
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> res;
        string word = "";

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] != ' ') {
                word += sentence[i];
            } else {
                res.push_back(word);
                word = "";
            }
        }
        res.push_back(word);

        for (int i = 0; i < res.size(); i++) {
            if (res[i].find(searchWord) == 0) {
                return i + 1;  
            }
        }

        return -1;
    }
};