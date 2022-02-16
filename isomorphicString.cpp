class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m,m2;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
       for(int i=0;i<s.size();i++){
           if(m[s[i]]!=t[i]||m2[t[i]]!=s[i]){
               return false;
           }
       }
       return true;
    }
};
