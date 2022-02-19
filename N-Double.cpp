class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(j!=i)
                    if(arr[i]==arr[j]/2.0) return true;
            }
        }
        return false;
    }
};
