class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
    
        

        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }
        
        for (auto it : freq) {
            if (it.second > (nums.size()/3)) {
            result.push_back(it.first);
        }
}
        return result;
        
    }
};