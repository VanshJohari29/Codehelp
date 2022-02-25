class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         int n = min(word1.length(),word2.length());
        string s="";
        int i=0;
        while(i<n)
        {
            s+=word1[i];
            s+=word2[i];
            i++;
        }
        if(n<word1.length())
        {
            while(i<word1.length())
            {
                s+=word1[i];
                i++;
            }
        }
        else if(n<word2.length())
        {
            while(i<word2.length())
            {
                s+=word2[i];
                i++;
            }
        }
        return s;
    }
};
