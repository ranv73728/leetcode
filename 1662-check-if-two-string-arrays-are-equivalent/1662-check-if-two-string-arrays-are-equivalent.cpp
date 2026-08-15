class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string result1;
        string result2;
        for(int i=0;i<n;i++){
            
            result1=result1+word1[i];
        }
        for(int j=0;j<m;j++){
            result2=result2+word2[j];
        }
        if(result1!=result2){
            return false;
        }
        return true;

        
    }
};