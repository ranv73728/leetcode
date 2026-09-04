class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int count2=0;
        int countequal=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]){
                countequal++;
            }

        }
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                count1++;

            }
            else if (nums[i+1]<nums[i]){
                count2++;
            }
        }
        
        if(count1+countequal==n-1 || count2+countequal==n-1){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};