class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int reverse = 0;
        int temp = x;

        while (temp != 0) {
            int digit = temp % 10;

            if (reverse > (INT_MAX - digit) / 10) // overflow condition check
                return false;

            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        return reverse == x;
    }
};