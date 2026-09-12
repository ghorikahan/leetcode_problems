// Last updated: 9/12/2026, 1:04:18 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for(int i=0;i<operations.size();i++){
            if(operations[i] == "X++" || operations[i] == "++X"){
                x++;
            }
            if(operations[i] == "X--" || operations[i] == "--X"){
                x--;
            }
        }

        return x;
    }
};