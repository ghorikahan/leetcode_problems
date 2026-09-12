// Last updated: 9/12/2026, 1:01:22 PM
class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(auto k : s){
            if(isalpha(k)){
                res += k;
            }
            else if(k == '%'){
                reverse(res.begin() , res.end());
            }
            else if(k == '#'){
                res = res + res;
            }
            else if(res.size() > 0 && k == '*'){
                res.pop_back();
            }
        }

        return res;
    }
};