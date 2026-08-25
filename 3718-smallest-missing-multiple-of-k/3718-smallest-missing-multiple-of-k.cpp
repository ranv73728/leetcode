class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int n=nums.size();
        int Min=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                freq[nums[i]]++;
            }
        } 
        for(int i=k; ; i=i+k){
            if(freq[i]==0){
                Min=i;
                break;
            }
        }
        return Min;
           
    }
};