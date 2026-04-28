class Solution {
public:

    string encode(vector<string>& strs) {
        //{sz#word}
        string res;
        for(string& s : strs){
            res+=to_string(s.size())+"#"+s;
        }
        return res;
    }

    vector<string> decode(string s) {
    vector<string> res;
    int i = 0;
    while (i < s.size()) {
        int sz = 0;
        while (s[i] != '#') {
            //add next to number to the right by multiplying existing number by 10
            //and then adding the new number (e.g 0 * 10 + 1 = 1 -> 1 * 10 + 2 = 12)
            sz = sz * 10 + (s[i] - '0');
            ++i;
        }
        ++i;
        res.push_back(s.substr(i, sz));
        i += sz; //skip to the index 1 after the end of the word
    }

    return res;
}
};
