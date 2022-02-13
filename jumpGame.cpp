class Solution {
public:
    bool canJump(vector<int>& nums) {
          int n=nums.size();
        for(int i=1;i<n;i++){
            
            if(nums[i-1] == 0){
                return 0;
            }
            nums[i]=max(nums[i-1]-1,nums[i]);
        }
        return 1;
    }
};
