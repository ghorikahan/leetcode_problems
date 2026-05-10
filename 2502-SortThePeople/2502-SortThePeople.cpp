// Last updated: 5/10/2026, 6:42:24 PM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for (int i = 0; i < heights.size() - 1; i++) {
            for (int j = i + 1; j < heights.size(); j++) {
                if (heights[i] < heights[j]) {
                    int temp1 = heights[i];
                    heights[i] = heights[j];
                    heights[j] = temp1;
                    string temp2 = names[i];
                    names[i] = names[j];
                    names[j] = temp2;
                }
            }
        }

        return names;
    }
};