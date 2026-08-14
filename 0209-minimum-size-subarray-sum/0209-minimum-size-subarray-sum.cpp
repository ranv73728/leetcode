class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long n=nums.size();
        long long l=0;
        long long r=0;
        long long minlen=INT_MAX;
        long long sum=0;
        
        while(r<n){
            sum=sum+nums[r];
            while(sum>=target){
                minlen=min(minlen,r-l+1);
                sum=sum-nums[l];
                l++;

            }
            if(sum<target){
                
                r++;
            }
        
        }
        if(minlen==INT_MAX){
            return 0;
        }
        else{
            return minlen;
        }
        
    }
};