// Last updated: 5/21/2026, 2:32:51 PM
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count =0;

        for(int i=0;i<words.size();i++){
            if(words[i].find(pref) == 0){
                count++;
            }
        }

        return count;
    }
};