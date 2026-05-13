// Last updated: 5/13/2026, 10:35:10 PM
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