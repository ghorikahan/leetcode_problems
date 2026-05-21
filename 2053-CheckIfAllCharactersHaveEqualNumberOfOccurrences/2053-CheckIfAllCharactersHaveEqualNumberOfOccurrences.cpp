// Last updated: 5/21/2026, 2:32:59 PM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        int freq = mp[s[0]];

        for(auto it : mp){
            if(freq != it.second){
                return false;
            }
        }

        return true;
    }
};