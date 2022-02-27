class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         int min = 0;
        int max = 0;
        vector<string> result;
        for(int i = 1; i < nums.size() + 1; i++)
        {
            if(i < nums.size() && nums[i] == nums[i-1] + 1)
                max = i;
            else
            {
                if(min < max)
                {
                    string temp = to_string(nums[min]) + "->" + to_string(nums[max]);
                    result.push_back(temp);
                }
                else
                    result.push_back(to_string(nums[min]));
                
                min = i;
            }
        }

        return result;
    }
};
