class Solution {
public:
    bool detectCapitalUse(string word) {
        //a-97 A-65
        int count1=0;
        int count2=0;
        int count3=0;
        for(int i=0;i<word.size();i++){
            if(word[i]-'A'<=26 && word[i]-'A'>=0){
                count1=count1+1;
            }
        }
        for(int i=0;i<word.size();i++){
            if(word[i]-'a'<=26 && word[i]-'a'>=0){
                count2=count2+1;
            }
        }
        if (word[0] >= 'A' && word[0] <= 'Z') {
            count3 = 1;

            for (int i = 1; i < word.size(); i++) {
                if (word[i] >= 'a' && word[i] <= 'z') {
                    count3++;
                }
            }
        }
        if(count1==word.size()|| count2==word.size() || count3==word.size()){

            return true;
        }
        else{
            return false;
        }
        
    }
};