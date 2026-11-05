class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size();
        int mid=n/2;
        for(int i=0;i<n;i++){
            count=count+(abs(nums[i]-nums[mid]));

        }
        return count;

        
    }
};