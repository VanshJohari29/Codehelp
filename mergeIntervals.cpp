class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedIntervals;
        if(intervals.size()<=0){
            return mergedIntervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>tempInterval=intervals[0];
        for(auto i:intervals){
            if(i[0]<=tempInterval[1]){
                tempInterval[1]=max(i[1],tempInterval[1]);
            }
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval=i;
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
        
    }
}; 
//Firstly make vector of vector mergedIntervals
//then check if intervals size is lesss than 0 than return mergedIntervals
//sort given intervals
//make a new vector tempInterval and store intervals values into it.
// Now check if iterator[0]<=tempInterval[1] then we will max of both of them to tempInterval
//otherwise we will store tempInterval values into mergedInterval
        
