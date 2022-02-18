class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
           vector <string> s;
        
        for (int i = 0; i < score.size(); i++) {
            int count= 1;
            for (int j = 0; j < score.size(); j++) {
                if (score[i] < score[j]) {
                    count++;
                }    
            }
            
            if (count == 1) {
                s.push_back("Gold Medal");
            } 
            else if (count == 2) {
                s.push_back("Silver Medal");
            }
            else if (count == 3) {
                s.push_back("Bronze Medal");
            }
            else {
                s.push_back(to_string(count));
            }
        }
        
        return s;
    }
};
