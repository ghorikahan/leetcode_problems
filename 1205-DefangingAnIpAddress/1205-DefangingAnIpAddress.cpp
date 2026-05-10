// Last updated: 5/10/2026, 6:43:07 PM
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