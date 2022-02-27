class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        int max=0,min=100000;
        for(int i=0;i<nums.size();i++)
        {
            if(mp1[nums[i]]==0)
            {
                mp[nums[i]]=i;mp1[nums[i]]++;
            }
            else
            {
                mp1[nums[i]]++;
                if(mp1[nums[i]]>max)
                {
                    max=mp1[nums[i]];
                 min=i-mp[nums[i]]+1;
                }
                else if(mp1[nums[i]]==max){
                    if((i-mp[nums[i]]+1)<min)
                        min=i-mp[nums[i]]+1;
                }
            }
        }
        if(max==0)return 1;
        cout<<max;
        return min;
    }
};
