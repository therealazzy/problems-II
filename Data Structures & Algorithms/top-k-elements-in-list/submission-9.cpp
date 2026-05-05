class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq;
        vector<int> res(k);

        for(int& n : nums){
            freq[n]++;
        }
        for(auto& p : freq){
            pq.push(make_pair(p.second, p.first));
        }

        for(auto& r : res){
            r = pq.top().second;
            pq.pop();
        }

        return res;
    }
};
