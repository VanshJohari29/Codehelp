class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(string str : sentences){
            int N = str.length(), words = 0;
            for(int i = 0; i<N;i++){
                if(str[i] == ' ') words++;
            }
            ans = max(ans, words+1);
        }
        return ans;
    }
};
