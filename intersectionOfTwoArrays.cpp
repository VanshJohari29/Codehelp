class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        unordered_set<int> s1,s2;
        s1=unordered_set<int>(nums1.begin(),nums1.end());
        s2=unordered_set<int>(nums2.begin(),nums2.end());
        for(auto i=s1.begin();i!=s1.end();i++)
        {
            if(s1.count(*i)==s2.count(*i))
                sol.push_back(*i);
        }
        return sol;
    }
};
//We make a vector to store the solution
// Firstly we make two sets and copy the elements of the num1 and num2 in set1 and set2 respectively.
//Then we run a iterator and compare both the sets and find those unique elements and push_back them into the 
//sol vector.
