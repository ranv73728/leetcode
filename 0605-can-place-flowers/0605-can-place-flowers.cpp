class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        long long m=flowerbed.size();
        long long count=0;
        for(long long i=0;i<m;i++){
            if(flowerbed[i]==0){
                bool left_khali=(i==0)||(flowerbed[i-1]==0);
                bool right_khali=(i==m-1)||(flowerbed[i+1]==0) ; 

                if(left_khali && right_khali){
                    flowerbed[i]=1;
                    n--;
                    if(n==0){
                        return true;
                    }
                }

            }
            
           
        }
        return false;
    }
};