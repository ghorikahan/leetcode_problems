// Last updated: 9/12/2026, 1:03:52 PM
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