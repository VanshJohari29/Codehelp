class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans, w;
        stringstream line(s);

        while (line>>w && k-->0)
        {
            ans += w+" ";
        }
    ans.pop_back();
        return ans;
    }
};
