class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //naive approach? use a map to count frequency
        vector<int>                     res(k);
        unordered_map<int, int>         freq;
        priority_queue<pair<int, int>>   pq;
        for( int& n : nums){
            freq[n]++;
        }
        for(auto& pair : freq ){
            pq.push(make_pair(pair.second, pair.first));
        }
        for(auto& r : res ){
            r = pq.top().second;
            pq.pop();
        }
        return res;
    }
};
