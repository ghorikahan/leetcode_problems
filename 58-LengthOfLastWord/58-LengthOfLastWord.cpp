// Last updated: 5/10/2026, 6:43:41 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        while(s.size() > 0 && s.back() == ' '){
            s.pop_back();
        }
        for(int i = s.size() - 1 ; i >= 0 ; i--) {
            if (s[i] == ' ') {
                return count;
            } else {
                count++;
            }
        }
        return count;
    }
};