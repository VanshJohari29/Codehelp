class Solution {
public:
    int missingNumber(vector<int>& nums) {
		
		
        sort(nums.begin(), nums.end());
		
        int chk = 0;
        for(int n : nums){
            if(n!=chk) break;
            chk++;
        }
        return chk;
    }
};
