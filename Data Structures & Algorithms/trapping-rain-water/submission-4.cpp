class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        int l = 0;
        int r = height.size() - 1;
        int maxLeft = height[l];
        int maxRight = height[r];
        while(l<r){
            if(maxLeft < maxRight){
                l++;
                maxLeft = max(maxLeft, height[l]);
                sum += max(0, maxLeft - height[l]);
            }
            else{
                r--;
                maxRight = max(maxRight, height[r]);
                sum += max(0, maxRight - height[r]);
            }
        }
        return sum;
    }
};
