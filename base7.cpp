class Solution {
public:
    string convertToBase7(int num) {
        bool isNegative = false; 
        if(num < 0) {
            num = -num; 
            isNegative = true;  
        }
        if(num == 0) {
            return "0"; 
        }
        string ans = "";   
        
        while(num) {
            ans = to_string(num % 7) + ans; 
            num /= 7;   
        }
        return isNegative ? "-"+ans : ans; 
    }
};
