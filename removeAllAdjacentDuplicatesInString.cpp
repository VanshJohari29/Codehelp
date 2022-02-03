class Solution {
public:
    string removeDuplicates(string s) {
        string r = "";
        for (char  ch : s)
            if (r.size() && ch == r.back())
                r.pop_back();
            else
                r.push_back(ch);
        return r;
    }
};
