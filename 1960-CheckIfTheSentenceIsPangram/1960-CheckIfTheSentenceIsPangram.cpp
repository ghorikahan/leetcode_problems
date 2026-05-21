// Last updated: 5/21/2026, 2:33:02 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s(sentence.begin(),sentence.end());

        return s.size() >= 26;
    }
};