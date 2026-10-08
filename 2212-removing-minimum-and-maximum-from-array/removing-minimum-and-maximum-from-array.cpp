class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int maxEle_idx = min_element(begin(nums), end(nums)) - begin(nums);
        int minEle_idx = max_element(begin(nums), end(nums)) - begin(nums);

        int left  = min(maxEle_idx, minEle_idx);
        int right = max(maxEle_idx, minEle_idx);

        return min({left+1+n-right, right+1, n-left});
    }
};