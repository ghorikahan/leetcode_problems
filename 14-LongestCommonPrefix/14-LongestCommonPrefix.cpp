// Last updated: 5/10/2026, 6:43:48 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string subString = strs[0];

        for(int i=1;i<strs.size();i++){
            while(strs[i].find(subString) != 0){
                subString.pop_back();
            }
        }


        return subString;
    }
};