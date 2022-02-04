class Solution {
public:
    bool isPalindrome(int x) {
        
        int number =x;
       long long  int reverse=0;
        if(x<0){
            return false;
        }
        else{
            
            while(x/10!=0){
                int temp;
                temp=x%10;
                
                reverse=reverse*10+temp;
                x=x/10;
            }
            
            reverse=reverse*10+x;
            
            if(number==reverse){
                return true;
            }
            else
                return false;
        
        }
        
    }
};
