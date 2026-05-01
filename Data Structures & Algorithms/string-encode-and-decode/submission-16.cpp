class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string& s : strs){
            res+=to_string(s.size()) + '#' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int size = 0;
            while(s[i] != '#'){
                size = size * 10 + (s[i] - '0');
                ++i;
            }
            ++i;
            res.push_back(s.substr(i, size));
            i+= size;
        }


        return res;
    }
};
