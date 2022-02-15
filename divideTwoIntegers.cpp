class Solution {
public:
    int divide(int dividend, int divisor) {
        long  ans;
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
         ans=(long)dividend/(long)divisor;
        return ans;
    }
};
