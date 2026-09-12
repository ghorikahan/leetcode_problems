// Last updated: 9/12/2026, 1:03:44 PM
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int inside = false;

        for(char ch : s){
            if(ch == '|'){
                inside = !inside;
            }

            else if(ch == '*' && !inside){
                count++;
            }
        }

        return count;
    }
};