class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //initialise return vector with size k
        vector<int> res(k);
        //use map to map num to frequency
        unordered_map<int, int> freq;
        //use prio queue to sort by having higher number at the top, use the frequency as the index
        priority_queue<pair<int, int>> pq;

        for(int& n : nums){
            freq[n]++;
        }
        for(auto& pair : freq){
            pq.push(make_pair(pair.second, pair.first));
        }
        for(auto& r : res){
            r = pq.top().second;
            pq.pop();
        }
        return res;
    }
};
