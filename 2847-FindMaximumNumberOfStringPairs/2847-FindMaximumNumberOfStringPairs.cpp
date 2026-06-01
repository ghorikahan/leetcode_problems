// Last updated: 6/1/2026, 1:07:45 PM
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int> mp;
        int count =0;

        for(int i=0;i<words.size();i++){
            sort(words[i].begin(),words[i].end());

            mp[words[i]]++;
        }

        int max = 0;

        for(auto it : mp){
            if(it.second > 1){
                max++;
            }
        }

        return max;
    }
};