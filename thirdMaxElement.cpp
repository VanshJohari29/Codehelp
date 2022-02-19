class Solution {
public:
    int thirdMax(vector<int>& num) {
        set<int>s(begin(num),end(num));
        if(s.size()<3){
            return *max_element(begin(s),end(s));
        }
        vector<int>sol(begin(s),end(s));
        return sol[sol.size()-3];
    }
};
/* First of all we will make a set and copy all the elements of nums in set s .
Then we will check if its size is less than 3 we will return max element of that set s.
otherwise we will make a vector sol and copy all the elements of set s in vector sol and return last 3 element 
that would be our 3 max element.*/
