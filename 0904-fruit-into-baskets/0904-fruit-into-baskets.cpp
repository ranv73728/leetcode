class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        int l = 0;
        int r = 0;
        int count = 0;

        unordered_map<int, int> mp;

        while (r < n) {

            // Add current fruit
            mp[fruits[r]]++;

            // If there are more than 2 types,
            // move l until there are at most 2 types
            while (mp.size() > 2) {

                mp[fruits[l]]--;

                if (mp[fruits[l]] == 0) {
                    mp.erase(fruits[l]);
                }

                l++;
            }

            // Current window is valid
            count = max(count, r - l + 1);

            // Move right pointer
            r++;
        }

        return count;
    }
};