// Last updated: 6/8/2026, 10:55:41 PM
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";

        for(char ch : s){
            if(!ans.empty() && ans.back() == ch){
                ans.pop_back();
            }
            else{
                ans+=ch;
            }
        }

        return ans;

    }
};