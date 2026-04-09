class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res(k);
        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq;

        for(int& n : nums){
            freq[n]++; //store frequency of number for each number
        }
        for(auto& pair : freq){
            pq.push(make_pair(pair.second, pair.first));//push the "second" as the index because thats the freq in the map
        }
        for(auto& r : res){
            r = pq.top().second; //grab the second because thats the number, the first is the frequency
            pq.pop();
        }

        return res;
    }
};
