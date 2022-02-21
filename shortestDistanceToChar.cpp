class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int count = -n;
        vector<int> ans(n);
        
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
                count = i;
            ans[i] = i - count;
        }
        
        for (int i = count - 1; i >= 0; i--)
        {
            if (s[i] == c)
                count = i;
            ans[i] = min(ans[i], count - i);
        }
        
        return ans;
    }
};
