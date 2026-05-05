class Solution {
public:
    int trap(vector<int>& height) {
        //min(maxRightHeight, maxLeftHeight) - height[i]
        //max height ascending
        //then max height descending
        //then min height - i
        vector<int> maxLeft(height.size());
        int maxL = 0;
        vector<int> maxRight(height.size());
        int maxR = 0;

        for(int i = 0; i < height.size(); ++i){
            maxLeft[i] = maxL;
            maxL = max(maxL, height[i]);
        }
        for(int i = height.size()-1; i >= 0; --i){
            maxRight[i] = maxR;
            maxR = max(maxR, height[i]);
        }
        int sum = 0;
        for(int i = 0; i < height.size(); ++i){
        sum += max(0, min(maxRight[i], maxLeft[i]) - height[i]);
        }

        return sum;
    }
};
