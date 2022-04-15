class Solution {
public:
    bool judgeCircle(string moves) {
        int v=0;
        int h=0;
        
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U')
              v++;    
            if( moves[i]=='D')
              v--;
            if(moves[i]=='L')
                h--;
            if(moves[i]=='R')
                h++;
        }
        
        return v==0 && h==0;
    }
};
