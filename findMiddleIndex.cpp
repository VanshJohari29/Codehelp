class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int totalsum = accumulate(nums.begin() , nums.end() , 0);
        int sum = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(sum==(totalsum-sum-nums[i])){
                return i;
            }
            sum += nums[i];
        }
        return -1;
    }
};
