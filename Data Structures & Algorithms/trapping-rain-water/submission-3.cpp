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
                l++;                                //increment left pointer
                maxLeft = max(maxLeft, height[l]);  //check for new maxheight on the left
                sum += maxLeft - height[l];         //add to res sum
                }
            else{ 
                r--;                                //decrement right pointer
                maxRight = max(maxRight, height[r]);//check for new maxheight
                sum += maxRight - height[r];        //add to res sum
                }
        }
        return sum;
    }
};
