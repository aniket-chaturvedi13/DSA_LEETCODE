/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int lo = 1;
        int hi = n;

        while(lo <= hi) {
            int guess_no = lo + (hi - lo) / 2;
            
            int val = guess(guess_no);
            if(val == 0) return guess_no;
            else if(val == -1) {
                hi = guess_no - 1; 
            }
            else lo = guess_no + 1;
        }
        return -1;
    }

};