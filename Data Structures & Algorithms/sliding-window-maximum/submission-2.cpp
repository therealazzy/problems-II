class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //store window in a map, use prio queue to find largest number, remove indices as we move window
        priority_queue<pair<int, int>>pq;
        vector<int> res;
        int l = 0, r = k - 1;
        for(int i = 0; i < k; ++i){
            pq.push(make_pair(nums[i], i));
        }
        res.push_back(pq.top().first);
        r++;
        while(r < nums.size()){
        pq.push({nums[r], r});
          while(pq.top().second < l+1){
            pq.pop();
          }
          res.push_back(pq.top().first);
          l++;
          r++;
        }

        return res;
    }
};
