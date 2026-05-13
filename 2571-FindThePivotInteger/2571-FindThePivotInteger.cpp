// Last updated: 5/13/2026, 10:35:05 PM
class Solution {
public:
    int pivotInteger(int n) {
        int totalsum = 0;

        int leftsum = 0;
        for(int i=1;i<=n;i++){
            totalsum += i;
        }

        for(int j=1;j<=n;j++){
            int rightsum = totalsum - leftsum - j;

            if(leftsum == rightsum){
                return j;
            }  

            leftsum += j;
        }

        return -1;
    }
};