class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int ans=0;
        int count=0;
        sort(piles.begin(), piles.end(), greater<int>());
        
            for(int i=0;i<n;i++){
                
                if(i%2!=0 && count<n/3){
                    count++;
                    ans=ans+piles[i];
                
                }


                
                

            }
        
        return ans;


        
    
        
        
    }
};