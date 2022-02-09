class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                count++;
        }
        if(count>1){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};
