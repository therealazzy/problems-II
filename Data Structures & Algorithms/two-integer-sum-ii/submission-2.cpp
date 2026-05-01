class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l < r){
            while(l<r && nums[l] + nums[r] > target) --r;
            while(l < r && nums[l] + nums[r] < target) ++l;
            if(nums[l] + nums[r] == target) return {l+1, r+1};
        }
        return {};
    }
};
