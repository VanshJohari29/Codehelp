class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>map;
        int count=0,n = arr.size();
        for(int i=0;i<n;i++){
            map[arr[i]]++;       
        }
        for(int i=0;i<n;i++){
            if(map[arr[i]] == 1){                   
                count++;
            }
            if(count == k){
                return arr[i];
            }
        }
         return "";
    }
};
