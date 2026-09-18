class Solution {
public:
    bool notValid(char ch) {
        if(ch >= 65 && ch <= 90) return false;
        else if(ch >= 97 && ch <= 122) return false;
        else if(ch >= 48 && ch <= 57) return false;
        else return true;
    }
    
    bool isPalindrome(string s) {
        int n = s.size();

        int i = 0;
        int j = n - 1;

        while( i < j ) {
            // skip a non-alphanumeric character from left
            while( i < j && notValid(s[i]) ) i++;

            // skip a non-alphanumeric character from right
            while( i < j && notValid(s[j]) ) j--;

            // converting uppercase to lowercase
            if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
            if(s[j] >= 65 && s[j] <= 90) s[j] += 32;
            
            //comparing characters
            if( s[i] != s[j] ) return false;
            i++;
            j--;
        }
        return true;
    }
};