class Solution {
public:
    int lengthOfLastWord(string s) {
        
          int n=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && n!=0 )
            {
                break;
            }
            if(s[i] == ' '){
            continue;
            }
            else{
                n++;
            }
            
        
        }
        return n;
        
    }
};
