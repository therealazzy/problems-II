class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //have a map that stores the strings with the index being the sorted version
        vector<vector<string>> res;
        unordered_map<string, vector<string>>map;
        for(string &s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(s);
        }

        for(auto &x : map){
            res.push_back(move(x.second));
        }
        return res;
    }
};
