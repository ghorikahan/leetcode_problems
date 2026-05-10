// Last updated: 5/10/2026, 6:43:33 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int val : nums) {
            mp[val]++;
        }

        int freq = nums.size() / 2;

        for(auto& it : mp){
            if(it.second > freq){
                return it.first;
            }
        }

        return -1;
    }
};