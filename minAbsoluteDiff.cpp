class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        vector<vector<int>>v;
       
        int min1= INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++)
        {
            min1= min(min1, arr[i]-arr[i-1]);
        }
           for(int i=0;i<arr.size()-1;i++) {
        if(arr[i+1]-arr[i]==min1) {
            v.push_back({arr[i],arr[i+1]});
        }
           }
        return v;
    }
};
// first make a vector of vector to store distinct pairs then sort the array and find the min of arr[i] -arr[i-1]
 //then check if arr[i+1]-arr[i] equals to min then store it to the vector of vector v and return v.
