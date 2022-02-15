class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        int d = 0;
        while (n != 4 & n != 1) {
            while (n) {
                d = n % 10;
                sum += d*d;
                n /= 10;
            }
            n = sum;
            sum = 0;
        }
        if (n == 1)
            return true;
        else
            return false;
    }
};
