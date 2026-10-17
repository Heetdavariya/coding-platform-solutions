class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ans="";
        int n1 = num1.size();
        int n2 = num2.size();
        int i = n1-1;
        int j = n2-1;
        while(i>=0 && j >=0){
            int sum = 0;
            sum = (num1[i] - '0') + (num2[j] - '0');
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            ans+=to_string(sum);
            i--;
            j--;
        }
        while(i>=0){
            int sum = 0;
            sum = num1[i] - '0';
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            ans+=to_string(sum);
            i--;
        }while(j>=0){
            int sum = 0;
            sum = num2[j] - '0';
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            ans+=to_string(sum);
            j--;
        }
        if(carry > 0) ans+="1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna