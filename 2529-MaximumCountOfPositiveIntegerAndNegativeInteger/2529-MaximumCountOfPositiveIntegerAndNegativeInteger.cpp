// Last updated: 9/12/2026, 1:03:19 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pcount = 0;
        int ncount = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                pcount++;
            }
            else if(nums[i] < 0){
                ncount++;
            }
            else{
                continue;
            }
        }

        if(pcount > ncount){
            return pcount;
        }
        else if(pcount < ncount){
            return ncount;
        }

        return pcount;
    }
};