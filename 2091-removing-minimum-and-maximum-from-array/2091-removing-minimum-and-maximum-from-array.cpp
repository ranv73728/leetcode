class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int Mini=1000000;
        int Minindex=-1;
        int a=-1;
        int Maxindex=-1;
        int b=-1;
        int Maxi=-1000000;
        for(int i=0;i<n;i++){
            if(nums[i]<Mini){
                
                Mini=nums[i];
                Minindex=i;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]>Maxi){
                
                Maxi=nums[j];
                Maxindex=j;
            }
        }
        
        // Both from left
        int left = max(Minindex, Maxindex) + 1;

        // Both from right
        int right = n - min(Minindex, Maxindex);
        // Opposite-side deletions
        int mixed1 = Minindex + 1 + (n - Maxindex);
        int mixed2 = Maxindex + 1 + (n - Minindex);

        return min({left, right, mixed1, mixed2});
    }
        



        
    
};