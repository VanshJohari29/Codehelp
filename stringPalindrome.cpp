bool checkPalindrome(string s)
{
     int st= 0;
    int e = s.length() - 1;
        while (st <= e)
    {
        while (!isalnum(s[st]) && st<e)
        {
            st++;
        }
        while (!isalnum(s[e]) && st<e)
        {
            e--;
        }
        if (tolower(s[st]) != tolower(s[e]))
            return 0;
        else
        {
            st++;
            e--;
        }
    }
    return 1;
        
}
