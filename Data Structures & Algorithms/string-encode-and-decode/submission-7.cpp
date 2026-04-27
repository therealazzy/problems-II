class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        vector<int> sizes;
        for(string& s : strs){
            sizes.push_back(s.size());
        }
        for(int& sz : sizes){
            res+=to_string(sz)+',';
        }
        res+='#';
        for(string& s : strs){
            res+=s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        vector<int> sizes;
        int i = 0;
        while(s[i] !='#'){
            string cur = "";
            while(s[i] != ','){
                cur+=s[i];
                i++;
            }
            sizes.push_back(stoi(cur));
            i++;
        }
        i++;
        for(int& sz : sizes){
            res.push_back(s.substr(i, sz));
            i+=sz;
        }
        return res;
    }
};
