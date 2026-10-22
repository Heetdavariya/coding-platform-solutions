class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i=0;
        string rs="";
        while(i<n){
            if(s[i] == 'a' || s[i] == 'A' ||
                s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' ||
                s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U' ){
                    rs+=s[i];
                }
                i++;
        }
        int j=rs.size()-1;
        if(j == 0) return s;
        for(int k=0;k<n;k++){
            if(s[k] == 'a' || s[k] == 'A' ||
                s[k] == 'e' || s[k] == 'E' ||
                s[k] == 'i' || s[k] == 'I' ||
                s[k] == 'o' || s[k] == 'O' ||
                s[k] == 'u' || s[k] == 'U' ){
                    s[k] = rs[j];
                    j--;
                }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna