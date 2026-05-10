// Last updated: 5/10/2026, 6:43:23 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(s1.find(nums[i]) != s1.end()){
                return nums[i];
            }
            else{
                s1.insert(nums[i]);
            }
        }
        return -1;
    }
};