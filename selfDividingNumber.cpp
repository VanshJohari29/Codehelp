class Solution {
public:
    bool isDividing(int n)
    {
        int d,temp=n;
        while(temp)
        {
          d=temp%10;
            if(d==0)
                return false;
          if(n%d!=0)
              return false;
            temp/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++)
        {
            if(isDividing(i))
                v.push_back(i);
        }
        return v;
    }
};
