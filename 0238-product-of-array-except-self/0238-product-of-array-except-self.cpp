class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
      
        vector<int>answer(n);
        int lp=1;
        int rp=1;
        
       
        vector<int> lproduct;
        vector<int> rproduct(n);
        lproduct.push_back(1);
        rproduct[n-1]=1;

        for(int i=1;i<n;i++){
            lp=lp*nums[i-1];
            lproduct.push_back(lp);
        }
        
        for(int i=n-2;i>=0;i--){
            rp=rp*nums[i+1];
            rproduct[i]=rp;
        }


        for(int i=0;i<n;i++){
            answer[i]=lproduct[i]*rproduct[i];
        }

        return answer;


        
        
    }
};