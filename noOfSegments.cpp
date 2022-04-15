class Solution {
public:
      int countSegments(string s) {
       int ans = 0;
    if(s.size() == 0)
        return 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            while(i < s.size() && s[i] != ' ')
                i++;
            
            ans++;
        }
        
    }
     
    return ans;
    
