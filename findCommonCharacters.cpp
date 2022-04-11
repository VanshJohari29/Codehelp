class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans{};
        string word = words[0];
        
        for(char &c: word){
            int count{1};
            
            for(int i{1}; i < words.size(); i++){
                size_t found = words[i].find(c);
                
                if(found != string::npos){
                    words[i][found] = '0';
                    count++;
                }
            }
            
            if(count == words.size())
                ans.push_back(string(1, c));
        }
        
        return ans;
    }
};
