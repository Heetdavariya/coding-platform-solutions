class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int pcnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
               pcnt++;
            }else{
                if(pcnt==0) cnt++;
                else pcnt--;
            }
        }
        if(pcnt==0) return cnt;
        return cnt + pcnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna