class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto i : tokens) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                if (st.size() >= 2) {
                    int op2 = st.top();
                    st.pop();
                    int op1 = st.top();
                    st.pop();
                    int ans;
                    if(i == "+") ans = (op1) + (op2);
                    if(i == "-") ans = (op1) - (op2);
                    if(i == "*") ans = (op1) * (op2);
                    if(i == "/") ans = (op1) / (op2);
                    st.push(ans);
                }
            }else{
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna