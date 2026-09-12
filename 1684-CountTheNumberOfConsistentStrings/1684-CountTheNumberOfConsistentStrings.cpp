// Last updated: 9/12/2026, 1:05:32 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st(allowed.begin(), allowed.end());
        int count = 0;

        for (string word : words) {
            bool isbool = true;

            for (char ch : word) {
                if (st.find(ch) == st.end()) {
                    isbool = false;
                    break;
                }
            }

            if (isbool)
                count++;
        }

        return count;
    }
};