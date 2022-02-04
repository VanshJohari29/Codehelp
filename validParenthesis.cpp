class Solution {
public:
    bool isLeft(char ch){
        return ch == '(' || ch == '[' || ch == '{';
    }
    
    char getLeft(char ch){
        if(ch == ')')
            return '(';
        if(ch == ']')        
            return '[';
        return '{';
    }
    
    bool isValid(string s) {
        if(s.length() % 2 == 1)
            return false;
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(isLeft(ch))
                st.push(ch);
            else if(st.empty())
                return false;
            else if(st.top() == getLeft(ch))
                st.pop();
            else
                return false;
        }
        if(!st.empty())
            return false;
        return true;
    }
};
