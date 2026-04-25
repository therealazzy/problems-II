class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //store the number with their frequencies (use map)
        //sort the numbers by frequency descending (use pq [pair from map])
        //pop and push into res vector (set vector size to k to begin with)
         unordered_map<int, int> freq;
         priority_queue<pair<int, int>>pq;
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
