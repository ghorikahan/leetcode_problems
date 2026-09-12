// Last updated: 9/12/2026, 1:06:58 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        for (int i = 0; i < address.size(); i++) {
            if(address[i] == '.'){
                res+="[.]";
            }
            else{
                res+=address[i];
            }
        }

        return res;
    }
};