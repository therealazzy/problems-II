class Solution {
public:
    int trap(vector<int>& height) {
        //two pointers - one on each end. smaller one gets shifted inwards - upadate max heights on each pass
        int sum = 0;
        int l = 0;
        int r = height.size() - 1;
        int maxLeft = height[l];
        int maxRight = height[r];
        while(l < r){
            if(maxLeft < maxRight) {
                l++;
                maxLeft = max(maxLeft, height[l]);
                sum += maxLeft - height[l];
                }
            else{ 
                r--;
                maxRight = max(maxRight, height[r]);
                sum += maxRight - height[r];
                }

        }
        return sum;
    }
};
