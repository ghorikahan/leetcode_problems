// Last updated: 9/12/2026, 1:02:30 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr;

        for(int i=0;i<words.size();i++){
        int count = 0;
            for(int j=0;j<words[i].length();j++){
                if(words[i][j] == x && count == 0){
                    arr.push_back(i);
                    count++;
                }
            }
        }

        return arr;
    }
};