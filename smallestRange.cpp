class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min1=INT_MAX,max1=INT_MIN;
        for(int i:nums){
            min1 = min(min1, i);
            max1 = max(max1, i);
        }
        //WE HAVE TO ADD MAX VALUE TO MIN ELEMENT AND MIN VALUE TO MAX ELEMENT TO COVER THE DIFFERENCE
        return max(max1-min1-2*k,0);
    }
};
