class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();

        int pvt_idx = -1;
        
        for(int i = n-1; i > 0; i--) {
            if(nums[i] > nums[i-1]) {
                pvt_idx = i-1;
                break;
            }
        }

        if(pvt_idx != -1 ) {
            int swap_idx = pvt_idx;

            for(int j = n-1; j >= pvt_idx + 1; j--) {
                if(nums[j] > nums[pvt_idx]) {
                    swap_idx = j;
                    break;
                }
            }

            swap(nums[pvt_idx], nums[swap_idx]);
        }

        reverse(nums.begin() + pvt_idx + 1, nums.end());
    }
};