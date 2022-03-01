class Solution {
public:
    string sortSentence(string s) {
        vector<string> word_arr(10); 
        string word = "";           
        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) >= 48 && int(s[i]) <= 57)
            {
                word_arr[s[i] - 48] = word + ' ';
                word = "";
                i++;
            }
             else
            {
                word += s[i];
            }
        }
        string ans = "";

        for (string w : word_arr)
        {
            ans += w;
        }
          ans.pop_back();
            return ans;
    }
};
