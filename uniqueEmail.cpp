class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> count;

    for (int i = 0; i < emails.size(); i++) {
        
        string temp = "";
        string now = emails[i];

        for (int j = 0; now[j] != '@'; j++) {
            
            if (now[j] == '+')
                break;
            
            if (now[j] == '.')
                continue;
            
            temp.push_back(now[j]);
        }
        
        int index = now.find('@');
        
        while (index < now.size()) {
            temp.push_back(now[index++]);
        }
        
        count[temp]++;
    }

  return count.size();
    }
};
