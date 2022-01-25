class Solution {
public:
    int subtractProductAndSum(int n) {
       int d=0,sum=0,p=1,r=0;
        while(n!=0){
            d=n%10;
            p=p*d;
            sum=sum+d;
            n=n/10;
            
        }
        
        r=p-sum;
        return {r};
        
    }
};
