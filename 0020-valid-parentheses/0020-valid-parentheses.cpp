class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        bool flag = false;
        for(auto i : s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }else if(i == ')' && !st.empty() && st.top() == '('){
                flag = true;
                st.pop();
            }else if(i == '}' && !st.empty() && st.top() == '{'){
                flag = true;
                st.pop();
            }else if(i == ']' && !st.empty() && st.top() == '['){
                flag = true;
                st.pop();
            }else{
                flag = false;
                return flag;
            }
        }
        if(!st.empty()){
            return false;
        }
        return flag;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna