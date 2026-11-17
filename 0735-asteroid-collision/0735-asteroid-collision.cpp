class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;

        for (auto i : asteroids) {
            bool alive = true;
            while (alive && i < 0 && !st.empty() && st.top() > 0) {
                if (abs(i) > st.top()) {
                    st.pop();          
                } else if (abs(i) == st.top()) {
                    st.pop();          
                    alive = false;
                } else {
                    alive = false;     
                }
            }

            if (alive) st.push(i);
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna