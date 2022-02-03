class Solution {
public:
    bool checkInclusion(string s1, string s2) {
          int n = s1.size(), m = s2.size();
        vector<int> s1_count(26), s2_count(26);
        
        if(n > m) return false;
        
        for(int i = 0; i < n; i++) {
            s1_count[s1[i]-'a']++;
            s2_count[s2[i]-'a']++;
        }
        
        int left = 0, right = n-1;
        while(right < m) {
            if(s1_count == s2_count) return true;
            right++;
            if(right != m) {
                s2_count[s2[right]-'a']++;
            }
            s2_count[s2[left++]-'a']--;
        }
        return false;
    }
};
