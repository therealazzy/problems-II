class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sort strings in a map [string | vector of strings]
        //for each index of the map push the vector of strings to the return vector
        unordered_map<string, vector<string>> group;
        vector<vector<string>> res;
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
