class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];

        sort(nums.begin(), nums.end());
        if(nums[0] != nums[1]) 
            return nums[0];

        int n = nums.size();
        for (int i = 1; i <n-1; i++) {
            if (nums[i - 1] != nums[i] && nums[i] != nums[i + 1])
                return nums[i];
        }
        return nums[n-1];
    }
};
