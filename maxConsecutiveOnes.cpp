class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int max1=INT_MIN;
    int count=0;
    for(int i:nums)
    {
        if(i==0)
        {    
            max1=max(max1,count);
            count=0;
        }
        else
            count++;
    }
    max1=max(max1,count);
    return max1;
    }
};
