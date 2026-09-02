class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        vector<int> answer;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1){
                answer.push_back(nums[i]);
            }
        }
        return answer;


        
    }
};