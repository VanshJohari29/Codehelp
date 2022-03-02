class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> t(n+1);
        t[0] = 0;
        for(int i = 1; i<=n; ++i)
            t[i] = t[i/2] + i%2;
        return t;
    }
};
// first make a vector of  n+1 as we are going to count from 0 to n
// t[0] will be 0 beacuse 0 has count of set bit is 0;
// we can compute current set bit count using previous count
// i%2 will be 0 for even number ans 1 for odd number
        
