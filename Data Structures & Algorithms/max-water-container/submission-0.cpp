class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        for(int i = 0; i < heights.size(); ++i){
            for(int j = heights.size()-1; j > i; --j){
                //get the difference between the indexes * shorter height
                int smaller = min(heights[i], heights[j]);
                int width = j-i;
                int area = smaller * width;
                maxA = max(maxA, area);
            }
        }
        return maxA;
    }
};
