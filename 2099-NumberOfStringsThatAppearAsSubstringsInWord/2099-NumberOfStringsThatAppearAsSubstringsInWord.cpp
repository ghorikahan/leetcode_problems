// Last updated: 5/21/2026, 2:32:56 PM
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count =0;

        for(int i=0;i<patterns.size();i++){
            if(word.find(patterns[i]) != string::npos){
                count++;
            }
        }

        return count;
    }
};