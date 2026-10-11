class Solution {
public:
    string defangIPaddr(string address) {
        string s= "";
        for(auto i : address){
            if(i == '.'){
                s+="[.]";
            }else{
                s+=i;
            }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna