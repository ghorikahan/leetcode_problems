// Last updated: 5/10/2026, 6:42:35 PM
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