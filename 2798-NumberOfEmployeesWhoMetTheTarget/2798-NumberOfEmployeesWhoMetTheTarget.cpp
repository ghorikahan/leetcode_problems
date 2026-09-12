// Last updated: 9/12/2026, 1:02:46 PM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count =0;
        for(int i=0;i<hours.size();i++){
            if(hours[i] >= target){
                count++;
            }
        }

        return count;
    }
};