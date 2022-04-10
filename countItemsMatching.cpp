class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0, i=0;
        if(ruleKey == "type")
            i = 0;
        if(ruleKey == "color")
            i = 1;
        if(ruleKey == "name")
            i = 2;
        
        for(auto x: items)
        {
            while(x[i] == ruleValue)
            {
                count++;
                break;
            }
        }
        return count;
    }
};
