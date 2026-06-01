// Last updated: 6/1/2026, 1:09:38 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left =0;
        int right = numbers.size()-1;

        while(right > left){
            int sum = numbers[left] + numbers[right];

            if(sum == target) {
                return {left+1,right+1};
            }
            else if(sum < target){
                left++;
            }
            else {
                 right--;
            }
        }



        return {};
    }
};