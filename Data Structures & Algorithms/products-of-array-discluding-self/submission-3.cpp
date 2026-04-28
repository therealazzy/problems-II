class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size()); //need to initialise res, if empty then we cant do res[i], and we need to push_back
        int prefix = 1;
        int postfix = 1;
        for(int i = 0; i < nums.size(); ++i){
            res[i] = prefix;
            prefix *= nums[i];
        }
        for(int i = nums.size()-1; i >= 0; --i){
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
    }
};
