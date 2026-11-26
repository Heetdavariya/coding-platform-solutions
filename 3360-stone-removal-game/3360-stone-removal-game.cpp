class Solution {
public:
    bool canAliceWin(int n) {
        int alice = 10;
        int bob = 9;
        while(1){
            if(n>=alice){
                n-=alice;
                alice-=2;
                if(n >= bob){
                    n-=bob;
                    bob-=2;
                }else{
                    return true;
                }
            }else{
                return false;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna