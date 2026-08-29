class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        int m=nums.size();
        vector<int> result;
        for(int i=0;i<m;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<m;i++){
            if(freq[nums[i]]>1){
                result.push_back(nums[i]);
                freq[nums[i]]=0;
            }
        }
        return result;




        
    }
};