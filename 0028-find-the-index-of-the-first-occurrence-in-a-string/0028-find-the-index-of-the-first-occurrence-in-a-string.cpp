class Solution {
public:
    int strStr(string haystack, string needle) {
      
        

        
        if (haystack.find(needle) != string::npos) {
            
            return haystack.find(needle);
            cout<<endl;
            
        }

    return -1;    
    }
};