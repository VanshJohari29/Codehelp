class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
         unordered_map<string,int> m;
        vector<string> v;
        for(int i=0;i<list1.size();i++){
            m[list1[i]]=i;
        }
        int index=INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end()){
                index=min(index,i+m[list2[i]]);
            }
        }
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end()){
                if(i+m[list2[i]]==index) v.push_back(list2[i]);
            }
            
        }
        return v;
    }
};
