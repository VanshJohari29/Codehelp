class Solution {
public:
    bool isSubsequence(string s, string t) {
    int n= s.length();
    int l= t.length();
    int i=1;
    int j=1;
    while(i<=n && j<=l)
    {
        if(s[i-1]==t[j-1])
        {i++;
         j++;
        }
        else
            j++;
    }
    if(i==n+1)
        return true;
    
    return false;
    }
};
