class Solution {
public:
      bool repeatedSubstringPattern(string s) {
        if (s.size() == 1) 
            return false;
        int n = s.size();
        for (int i=n/2;i>0;i--){
            if (n%i != 0) 
                continue;
            string s1 = s.substr(0,i);
            string tmp = "";
            while (tmp.size() < n && (tmp == s.substr(0,tmp.size())))
            {
                tmp =  tmp + s1;
            }
            if(tmp == s)
                return true;
        }
        return false;
    }  
    
};
