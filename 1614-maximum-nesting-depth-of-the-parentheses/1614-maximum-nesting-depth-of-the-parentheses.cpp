class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,maxx=0;
        for(auto i : s){
            if(i=='('){
                cnt++;
            }else if(i==')'){
                cnt--;
            }
            maxx = max(maxx,cnt);
        }
        return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna