// Last updated: 9/12/2026, 1:04:49 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s(sentence.begin(),sentence.end());

        return s.size() >= 26;
    }
};