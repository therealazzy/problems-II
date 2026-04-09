class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < 2; ++i){
            for(int& n : nums){
                res.push_back(n);
            }
        }
        return res;
    }
};