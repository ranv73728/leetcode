class Solution {
public:
    string makeGood(string s) {
        //a-97 A-65
        // vector<string> sletters(26,0);
        // vector<string> bletters(26,0);
        string result="";
        for(int i=0;i<s.size();i++){
            if(!result.empty() && (result.back()-32==s[i] || result.back()+32==s[i])){
                result.pop_back();
            }
            else{

                result.push_back(s[i]);
            }
        }
        return result;
    }
};