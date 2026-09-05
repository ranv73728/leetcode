class Solution {
public:
    string defangIPaddr(string address) {
        string answer="";
        int index=0;
        while(index<address.size()){
            if(address[index]=='.'){
                answer+="[.]";
            }
            else{
                answer+=address[index];
            }
            index++;
        }
        return answer;

         
        
    }
};