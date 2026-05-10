// Last updated: 5/10/2026, 6:43:15 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> c;
        vector<int> res; 
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    c.insert(nums1[i]);
                }
            }
        }

        for(auto x : c){
            res.push_back(x);
        }


        return res;
    }
};