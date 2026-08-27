class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int sum=0;
        int Maxh=0;
        for(int i=0;i<n;i++){
            sum=sum+gain[i];
            Maxh=max(Maxh,sum);

        }
        return Maxh;

        
    }
};