class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int i=0;
        while(i<n){
            char currchar=chars[i];
            int count=0;
            //finding no of duplicates
            while(i<n && currchar==chars[i]){
                count++;
                i++;
            }
            //now assinging the value to index
            chars[index]=currchar;
            index++;
            //converting the count into string so if count >10 we can assign 1 and 0 seperately
            if(count>1){
                string s=to_string(count);
                for(char ch : s){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
        
    }
};