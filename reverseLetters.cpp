class Solution {
public:
    string reverseOnlyLetters(string s) {
         int i = 0, j = s.length() - 1, t, ci, cj;
        
        while(i < j){
            ci = s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z';
            cj = s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z';
            
            if(ci && cj){
                t = s[i];
                s[i] = s[j];
                s[j] = t;
                i++; j--;
            }    
            else if(ci)
                j--;
            else if(cj) 
                i++;
            else
            {
                i++; j--;
            }
        }
        return s;
    }
};
