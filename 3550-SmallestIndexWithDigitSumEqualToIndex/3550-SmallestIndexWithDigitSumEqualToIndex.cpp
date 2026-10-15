// Last updated: 10/15/2026, 4:51:15 PM
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();


        for(int i=0;i<n;i++){
            int x = nums[i];
            int newNum = 0;

            for(;x>0;x/=10){
                newNum+=x%10;
            }
            if(newNum == i) {
                return i;
            }
        }

        return -1;
    }
};