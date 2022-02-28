class Solution {
public:
    int longestPalindrome(string s) {
         unordered_map<char,int> map;
        for( auto c : s ){
            map[c]++;
        }
        int rem = 0;
        int maxl = 0;
        for( auto itr = map.begin(); itr != map.end(); itr++ ){
            if( rem == 0 && itr->second%2 == 1 ){
                rem++;
            }
            maxl += itr->second - itr->second%2;
        }
        
        
        return maxl+rem ;
    }
};
