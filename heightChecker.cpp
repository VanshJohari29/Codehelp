class Solution {
public:
    int heightChecker(vector<int>& heights) {
          vector<int> v;
    int n = heights.size();
    int num = 0;
    for(int i = 0; i<n; i++){
        v.push_back(heights[i]);
    }
    sort(heights.begin() , heights.end());
    for(int i = 0; i<n; i++){
       if(v[i] != heights[i]){
           num++;
       }
    }
    return num;
    }
};
