
class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp,
               vector<bool>& visited, vector<vector<int>>& ans) {

        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (!visited[i]) {

                visited[i] = true;
                temp.push_back(nums[i]);

                solve(nums, temp, visited, ans);

                temp.pop_back();
                visited[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(), false);

        solve(nums, temp, visited, ans);

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna