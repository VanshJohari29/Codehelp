class Solution {
public:
    string reverseWords(string s) {
         s += " ";
        int n = s.size();

        
        int i = 0, j = 0;
        
        while(j < n){
            if(s[j] == ' '){
                reverse(s.begin()+i, s.begin()+j);
                j++;
                i = j;
            }
            else{
                j++;
            }
        }
        
        s.pop_back();
        
        return s;
    }
};
