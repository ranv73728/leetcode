class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<int>& temp,
               vector<bool>& used) {

        // Base case
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            // Skip if already used
            if (used[i] == true) {
                continue;
            }

            // Choose
            temp.push_back(nums[i]);
            used[i] = true;

            // Explore
            solve(nums, temp, used);

            // Backtrack
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        solve(nums, temp, used);

        return ans;
    }
};