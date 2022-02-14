class Solution {
public:
    string reverseVowels(string s) {
        int i =0;
        int j =s.size()-1;
        bool flag1 =0,flag2 =0;
          while(i<=j){
              if(tolower(s[i]) == 'a' || tolower(s[i])== 'e' ||tolower(s[i]) == 'i' ||tolower(s[i])== 'o'||tolower(s[i]) == 'u' ){
                         flag1 = 1;
                           }
                        else{
                            i++;
                                }
                                if(tolower(s[j]) == 'a' || tolower(s[j]) == 'e' || tolower(s[j]) == 'i'||tolower(s[j])== 'o' ||tolower(s[j]) == 'u' )
                                {
                                    flag2 =1;
                                      }else
                                {
                                   j--;
                                 }
                                  if(flag1 && flag2){
                                      swap(s[i],s[j]);
                                           i++;
                                            j--;
                                     flag1 =0,flag2 =0;
                                        }
                                      }
                              return s;
    }
};
