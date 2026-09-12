// Last updated: 9/12/2026, 1:07:13 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string s = words[0];

        vector<string> str;

        for (char c : s) {
            int index;

            for (int i = 1; i < words.size(); i++) {
                index = words[i].find(c);

                if (index == -1) {
                    break;
                }

                else {
                    words[i].erase(index, 1);
                }
            }

            if (index != -1)
                str.push_back(string(1, c));
        }
        return str;
    }
};