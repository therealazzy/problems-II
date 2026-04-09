class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //if we get the product of every value before an index and every value after an index we can multiply them 
        //find the answer
        //we can do a pass on the output array and find the product of every index incrementally and then do the opposite
        //going back from the last index
        vector<int>res(nums.size());
        int prefix = 1;
        for(int i = 0; i < nums.size(); ++i){
            res[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for(int i = nums.size()-1; i >= 0; --i){
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
    }
};
