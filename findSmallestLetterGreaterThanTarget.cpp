class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
         int s=0;
        int e=l.size()-1;
        char a='#';
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(l[mid]==t)
            {
                s=mid+1;
            }else if(l[mid]-'a'<t-'a')
            {
                s=mid+1;
            }else
            {
                a=l[mid];
                e=mid-1;
            }
        }
        if(a=='#')
        {
            return l[0];
        }
        return a;
    }
};
