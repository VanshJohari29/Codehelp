class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       int j = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                j++;
            }else{
                nums[i-j] = nums[i];
            }
        }
        nums.erase(nums.end()-j , nums.end());
        
        return nums.size();
        
    }
};
