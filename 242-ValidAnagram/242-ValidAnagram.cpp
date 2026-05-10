// Last updated: 5/10/2026, 6:43:27 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != s.length()){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s == t){
            return true;
        }

        return false;
    }
};