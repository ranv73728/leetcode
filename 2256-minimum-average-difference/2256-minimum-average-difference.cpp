class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long n=nums.size();
        long long totalSum=0;
        long long sum1=0;
        long long sum2=0;
        long long avg1=0;
        long long avg2=0;
        vector<int> result(n);
        
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        for(int i=0;i<n;i++){
            
            sum1=sum1+nums[i];
            sum2=totalSum-sum1;
            avg1=sum1/(i+1);
            if(i == n - 1) {
                avg2 = 0;
            }
            else {
                avg2 = sum2 / (n - i - 1);
            }
            result[i]=abs(avg1-avg2);


        }
        int index=0;

        for(int i=0;i<n;i++){
            if(result[i]<result[index]){
                index=i;
            }

        }
        return index;
        


        
    }
};