// Last updated: 9/12/2026, 1:05:24 PM
class Solution {
public:
    string interpret(string command) {
        string res = "";

        for(int i=0;i<command.size();i++){
            if(command[i] == 'G'){
                res += command[i];
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                res += 'o';
            }
            else if(command[i] == '(' && command[i+1] == 'a'){
                res += "al";
            }
        }

        return res;
    }
};