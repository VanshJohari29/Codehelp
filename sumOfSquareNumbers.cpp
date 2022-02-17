class Solution {
public:
    bool judgeSquareSum(int c) {
         for(long int i = 0 ; i*i <= c ; i++){
            double j = sqrt(c - i*i); //a^2 + b^2 = c =>  b^2=c-a^2
            if(floor(j) == ceil(j))
                return true;
        }
        return false;
    }
};
