class Solution {
public:
    int countPrimes(int n) {
         vector<bool> isP(n);
    int count=0;
    for(int i=2; i<n; i++)
        isP[i]=true;
    for(int i=2; i*i<n; i++) {
        if(!isP[i])
            continue;
        for(int j=i*i; j<n; j+=i) 
            isP[j]=false;
    }
    for(int i=2; i<n; i++)
        if(isP[i])
            count++;
 return count;
    }
};
