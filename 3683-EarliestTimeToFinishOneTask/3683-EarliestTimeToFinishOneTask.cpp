// Last updated: 9/12/2026, 1:01:11 PM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int> res;

        for(int i=0;i<tasks.size();i++){
            int sum = 0;
            for(int j=0;j<tasks[i].size();j++){
                sum += tasks[i][j];
            }
            res.push_back(sum);
        }

        int min = res[0];

        for(int el : res){
            if(el < min){
                min = el;
            }
        }

        return min;
    }
};