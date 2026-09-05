class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string s2 = "";
        int cnt = 0;
        int start = -1, end = -1;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                if(cnt==0){
                    start = i;
                }
            
                cnt++;
            }
            else{
                cnt--;
                if(cnt==0){
                    end = i;
                    s2 += s.substr(start+1,end-start-1);
                }
            }
        }
        return s2;
        
    }
};