// Last updated: 9/12/2026, 1:07:02 PM
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