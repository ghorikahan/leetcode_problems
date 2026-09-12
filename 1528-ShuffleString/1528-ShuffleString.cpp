// Last updated: 9/12/2026, 1:05:53 PM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        string res = "";
        for(int i=0;i<indices.size();i++){
            mp[indices[i]] = s[i];
        }

        for(auto it : mp){
            res += it.second;
        }

        return res;
    }
};