// Last updated: 5/14/2026, 12:22:24 AM
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;

        for(int i=1;i<=n;i++){
            string str = "";
            if(i%3==0 && i%5==0){
                res.push_back("FizzBuzz");
            }
            else if(i%3==0){
                res.push_back("Fizz");
            }
            else if(i%5==0){
                res.push_back("Buzz");
            }
            else {
                res.push_back(to_string(i));
            }
        }

        return res;
    }
};