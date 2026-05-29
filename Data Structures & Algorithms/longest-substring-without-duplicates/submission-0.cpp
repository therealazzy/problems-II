class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_set<char> cset;
    int l = 0;
    int r = 0;
    int res = 0;
    while(r < s.length()){
        if(!cset.count(s[r])){
            cset.insert(s[r]);
            res = max(res, r - l + 1);
        }else{
        while(cset.count(s[r])){
            cset.erase(s[l]);
            l++;
        }
        cset.insert(s[r]);
        }
        r++;
    }

    return res;
    }
};
