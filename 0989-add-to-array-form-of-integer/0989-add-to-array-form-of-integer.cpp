class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        string knum = to_string(k);
        int len = knum.size();
        int carry=0;
        for(int i=num.size()-1;i>=0;i--){
            int sum=0;
            sum+=carry;
            if(len>=1){
                sum += (knum[len-1] - '0') + (num[i]);
                carry = sum/10;
                sum = sum%10;
                ans.push_back(sum);
                len--;
            }else{
                sum += num[i];
                carry = sum/10;
                sum = sum%10;
                ans.push_back(sum);
            }
        }
        while(len>=1){
            int sum = 0;
            sum+=carry;
            sum+= (knum[len-1] - '0');
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
            len--;
        }
        if(carry > 0) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna