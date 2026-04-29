class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> group;

        for(string& s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            group[sorted].push_back(s);
        }
        for(auto& g : group){
            res.push_back(g.second);
        }
        return res;
    }
};
