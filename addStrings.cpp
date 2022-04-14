class Solution {
public:

string addStrings(string num1, string num2) {
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    if (num1.length() > num2.length())
        swap(num1, num2);
    
    while (num1.length() < num2.length())
        num1 += "0";
    
    string ans = "";
    int curr, carry = 0;
    for (int i = 0; i < num1.length(); i++)
    {
        int val = (num1[i] - '0') + (num2[i] - '0') + carry;
        curr = val % 10;
        carry = val / 10;
        ans += (curr + '0');
    }
    if (carry)
        ans += (carry + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}
};
