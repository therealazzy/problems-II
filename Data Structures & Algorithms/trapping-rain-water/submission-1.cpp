class Solution {
public:
    int trap(vector<int>& height) {
        //min(maxRightHeight, maxLeftHeight) - height[i]
        //max height ascending
        //then max height descending
        //then min height - i
        vector<int> res(height.size());
        int maxL = 0;
        int maxR = 0;
        //put in the max left height ascending
        for(int i = 0; i < height.size(); ++i){
            res[i] = maxL;
            maxL = max(maxL, height[i]);
        }
        //put in the minimum between the max height ascending and the max height descending
        for(int i = height.size()-1; i >= 0; --i){
            res[i] = min(maxR, res[i]);
            maxR = max(maxR, height[i]);
        }
        int sum = 0;
        for(int i = 0; i < height.size(); ++i){
            sum += max(0, res[i] - height[i]);
        }
        return sum;
    }
};
