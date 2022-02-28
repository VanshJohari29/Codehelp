class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,char> mp;
		int sum = 0;
        for(char& ch : stones) {
            mp[ch]++;
        }
        for(char& ch : jewels){
            sum += mp[ch];
        }
        return sum;
    }
};
