class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            count=count+(nums[n-1]-nums[i]);
        }
        return count;
        
    }
};