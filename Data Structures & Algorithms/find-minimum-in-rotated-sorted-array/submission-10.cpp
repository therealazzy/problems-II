class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size() - 1;
        int res = INT_MAX;
        while(l <= r){
            if(nums[l] < nums[r]){
                res = min(res, nums[l]);
                break;
            }

            int k = l + ((r - l ) / 2);
            res = min(res, nums[k]);
            if(nums[l] <= nums[k]){
                l = k + 1;
            } else{
                r = k;
            }
        }
        return res;
    }
};
