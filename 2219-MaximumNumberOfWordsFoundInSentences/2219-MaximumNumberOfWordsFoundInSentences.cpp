// Last updated: 5/10/2026, 6:42:32 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> res;

        for (int i = 0; i < sentences.size(); i++) {
            int count = 0;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }

            res.push_back(count + 1);
        }

        int max = res[0];
        for (int k = 0; k < res.size(); k++) {
            if (max < res[k]) {
                max = res[k];
            }
        }

        return max;
    }
};