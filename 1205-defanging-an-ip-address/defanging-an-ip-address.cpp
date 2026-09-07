class Solution {
public:
    string defangIPaddr(string address) {
        
        int n = address.length();

        string s = "[.]";
        string ans = "";

        for(int i = 0; i < n; i++) {

            char ch = address[i];
            
            if(ch == '.') {
                ans += s;
                continue;
            }

            ans += ch;

        }

        return ans;

    }
};