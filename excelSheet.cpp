class Solution {
public:
    int titleToNumber(string columnTitle) {
        unordered_map<char, int> map;
        int val = 1;
        
        
        for(int i = 65; i <= 90; i++)
        {
            map[char(i)] = val;
            val++;
        }

        val = map[columnTitle[0]];
        
        
        for(int j = 1; j < columnTitle.length(); j++)
        {
            val *= 26;
            val += map[columnTitle[j]];                
        }
        
        return val;
    }
};
