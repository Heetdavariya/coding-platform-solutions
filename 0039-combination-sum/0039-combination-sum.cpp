
class Solution {
public:
    void solve(int idx, vector<int>& candidates, int target,
               vector<int>& temp, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (idx == candidates.size() || target < 0) {
            return;
        }

        // Pick the current element
        temp.push_back(candidates[idx]);

        solve(idx, candidates, target - candidates[idx], temp, ans);

        // Backtrack
        temp.pop_back();

        // Skip the current element
        solve(idx + 1, candidates, target, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, candidates, target, temp, ans);

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna