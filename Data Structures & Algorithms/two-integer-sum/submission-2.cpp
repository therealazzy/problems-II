class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; //map to track the numbers we have seen and their index to return

        for(int i = 0; i < nums.size(); ++i){
            int second = target - nums[i];
            if(seen.count(second)) return {seen[second], i};
            seen[nums[i]] = i;
        }
        return {};
    }
};
