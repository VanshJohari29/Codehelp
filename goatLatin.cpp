class Solution {
public:
    string toGoatLatin(string sentence) {
        string word, result, suffix;
        int n= sentence.length();
        unordered_set<char> vowels= {'a','A','e','E','i','I','o','O','u','U'};
        stringstream ss(sentence);
        while(ss>>word){
            suffix+='a';
            if(vowels.find(word[0])==vowels.end())
                word=word.substr(1)+word[0];
            result+=word+"ma"+suffix+' ';
             }
        result.pop_back();
        return result;
        
    }
};
