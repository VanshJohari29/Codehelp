class Solution {
public:
    int fib(int n) {
       if(n==0 || n==1){
            return n;
        }
       return fib(n-1) + fib(n-2);
    }
};
//If n is 0 or 1 then return n only
//F(0) = 0, F(1) = 1
//F(n) = F(n - 1) + F(n - 2), for n > 1.
