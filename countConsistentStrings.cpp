class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_map<char, int> mp;
        
        for(auto x: allowed)
            mp[x]++;
        
        for(auto y: words)
        {
            int i=0;
            for(; i<y.size(); i++)
                if(mp.find(y[i])==mp.end()) break;
            
            if(i==y.size()) count++;
        }
        return count;
    }
};
