class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        for (auto i : s)
        {
            arr[(int)i - 97]++;
        }
        for (int i = 0; i<s.size() ; i++)
        {
            if (arr[s[i] - 97] == 1) return i;
        }
        return -1;
    }
};
