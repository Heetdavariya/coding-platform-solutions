class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;
        for(auto i : accounts){
            int temp = 0;
            for(auto j : i){
                temp+=j;
            }
            ans.push_back(temp);
        }
        int max = *max_element(ans.begin(), ans.end());
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna