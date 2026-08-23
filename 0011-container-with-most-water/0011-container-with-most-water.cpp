class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        long long area=0;
        long long maxarea=0;
        
            int l=0;
            int r=n-1;
            while(l<r){
                area=(min(height[l],height[r]))*(r-l);
                maxarea=max(maxarea,area);
                if(height[l]<height[r]){
                    l++;
                }
                else{
                    r--;
                }
              

            }
        
        return maxarea;
        
    }
};