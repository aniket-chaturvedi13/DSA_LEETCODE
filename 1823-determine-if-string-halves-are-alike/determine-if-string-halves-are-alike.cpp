class Solution {
public:

    bool isVowel(char ch) {

        if(ch == 'a') return true;
        if(ch == 'e') return true;
        if(ch == 'i') return true;
        if(ch == 'o') return true;
        if(ch == 'u') return true;
        if(ch == 'A') return true;
        if(ch == 'E') return true;
        if(ch == 'I') return true;
        if(ch == 'O') return true;
        if(ch == 'U') return true;

        return false;
    }
    
    bool halvesAreAlike(string s) {
        
        int n = s.length();

        int countLeft = 0, countRight = 0;

        int i = 0, j = n / 2;

        while( (i < n/2) && (j < n) ) {

            if(isVowel(s[i])) countLeft++;
            if(isVowel(s[j])) countRight++;

            i++;
            j++;
        }

        return (countLeft == countRight);
    }
};