class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX, largest = INT_MIN, ans = 1;
        for(auto &x : nums){
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
        for(int i = 2; i <= smallest; i++){
            if(!(smallest%i) and !(largest%i)) ans = i;
        }
        return ans;
    
    }
};
