class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i = 0;
        int j = n - 1;
        int pos = n - 1;
        while (pos >= 0)
        {
           
            if (abs(nums[i]) > abs(nums[j]))
            {
                ans[pos--] = nums[i] * nums[i];
               i++;
            }
            else
            {
                ans[pos--] = nums[j] * nums[j];
                j--;
            }

        }
        return ans;
    }
};
