class Solution {
public:
    bool check(int speed, vector<int>& piles, int h) {
        int n = piles.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(count > h) return false;
            if(piles[i] <= speed) count++;
            else {
                if(piles[i]%speed == 0) count += (piles[i]/speed);
                else count += piles[i]/speed + 1;
            }
        }

        if(count <= h) return true;
        else return false;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int lo = 1;
        int hi = piles[max_element(begin(piles), end(piles)) - begin(piles)];

        int min_speed = 0;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(check(mid, piles, h)) {
                min_speed = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return min_speed;
    }
};