class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size() - 1, res = INT_MAX;

        while(l <= r){
            if(nums[r] > nums[l]){
                res = min(res, nums[l]);
                break;
            }

            int m = l + ((r - l) / 2);
            res = min(res, nums[m]);
            if(nums[m] >= nums[l]){
                l = m + 1;
            } else{
                r = m - 1;
            }
        }

        return res;
    }
};
