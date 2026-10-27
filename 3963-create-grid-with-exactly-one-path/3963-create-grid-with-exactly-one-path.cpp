class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n - 1, '#') + ".");
        grid[0] = string(n, '.');
        return grid;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna