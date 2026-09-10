class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        int m = s.length();

        int n = spaces.size();

        string result = "";

        int i = 0, j = 0;

        while(i < m && j < n) {

            if(i == spaces[j]) {
                result += ' ';
                result += s[i];
                j++;
            }
            else {
                result += s[i];
            }
            i++;
        }

        while(i < m) {
            result += s[i];
            i++;
        }

        return result;
    }
};