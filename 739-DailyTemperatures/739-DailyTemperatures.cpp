// Last updated: 6/3/2026, 10:05:36 AM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<int> st;

        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int preIndex = st.top();
                st.pop();
                res[preIndex] = {i-preIndex};
            }
            st.push(i);
        }

        return res;
    }
};