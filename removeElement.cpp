class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int n=nums.size();
        int j=0,i=0;
        while(i<n){
            while(i<n && nums[i]==val){
                i++;
            }
            if(i<n){
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        
        return j;
    }
};
