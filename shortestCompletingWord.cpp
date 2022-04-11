class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int count=0,maxx=INT_MIN;
        string ans="";
        for(auto word:words){
            count=0;
            map<char,int> mp;
            for(auto i:word){
                mp[i]++;
            }
            for(auto j:licensePlate){
                if(j==' ')  continue;
                if((mp[tolower(j)]--)>0)    count++;
            }
            if(count>maxx){
                maxx=count;
                ans=word;
            }
            else if(count==maxx){
                maxx=count;
                if(word.size()<ans.size())  ans=word;
            }
        }
        return ans;
    }
};
