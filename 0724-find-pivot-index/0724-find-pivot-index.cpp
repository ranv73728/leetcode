class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        int totalsum=0;


        for(int i=0;i<n;i++){
            totalsum=totalsum+nums[i];

        }
        if(totalsum-nums[0]==0){
            return 0;
        }
        // if(totalsum-nums[n-1]==0){
            
        //     return n-1;
        //}
        for(int i=1;i<n;i++){
            leftsum=leftsum+nums[i-1];
            rightsum=totalsum-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            
            
        }
        return -1;
        
    }
};