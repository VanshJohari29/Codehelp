class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0,sum=0,i=0;
        int n=gain.size();
        while(i<n){
            sum = sum+gain[i];
            if(sum>max)
                max = sum;
            i++;
        }
        return max;

    }
};
