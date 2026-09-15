class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();

        int water = 0;

        int i = 0, j = n-1;
        int leftMax = 0;
        int rightMax = 0;

        while( i < j ) {
            if(height[i] < height[j]) {
                leftMax = max(leftMax, height[i]);
                water += (leftMax - height[i]);
                i++;
            }
            else {
                rightMax = max(rightMax, height[j]);
                water += (rightMax - height[j]);
                j--;
            }
        }

        return water;
    }
};