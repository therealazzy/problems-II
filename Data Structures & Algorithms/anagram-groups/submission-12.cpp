class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> res;
        for(string& s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(s);
        }

        for(auto& g : groups){
            res.push_back(g.second);
        }
        return res;
    }
};
