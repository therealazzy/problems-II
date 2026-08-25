class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int>res;
        for(int i = 0; i < nums.size(); i++){
            while(!dq.empty() && dq.front() <= i - k){ //remove expired indices
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] <= nums[i]){ //remove useless less nums
                dq.pop_back();
            }
            dq.push_back(i);
            if( i >= k - 1){ //only push if we are within the fixed window size
                res.push_back(nums[dq.front()]);
            }
        }

        return res;
    }
};
