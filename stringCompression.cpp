class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, it = 0;
        
        while(it<chars.size()){
            int currchar = chars[it];
            int si = 0;
            while(it<chars.size() and chars[it]==currchar){
                si++;
                it++;
            }
            
            chars[i++] = currchar;
            if(si>1){
                string str = to_string(si);
                for(char x: str){
                    chars[i++] = x;
                }
            }
        }
        
        return i;
    }
};
