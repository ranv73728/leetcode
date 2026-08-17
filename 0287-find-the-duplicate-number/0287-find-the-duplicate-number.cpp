class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> freq(n+1,0);
        int num;
        // for(int i=1;i<n+1;i++){
        //     freq[i]++;
        // }
        // for(int i=1;i<n+1;i++){
        //     if(freq[i]==2){
        //         num = i;
        //     }
        // }
        // return num ; 
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second>1){
                num=it.first;
                break;
            }
        }
        return num;
               
        
    }
};