class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //calculate prefix and append it to the return vector
        //calculate the postfix and multiply it by the postfix for each index
        int s = nums.size();
        vector<int> res(s);
        int prefix = 1;
        for(int i = 0; i < s; ++i){
            res[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for(int i = s - 1; i >= 0; --i){
            res[i] *= postfix;
            postfix *= nums[i];
        }
    return res;
    }
};
