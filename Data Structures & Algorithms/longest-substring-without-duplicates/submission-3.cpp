class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //two pointer - dynamic sliding window with a set
        unordered_set<char> seen;
        int r = 0, l = 0, res = 0;
        while(r < s.length()){
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            res = max(res, (r - l) + 1);
            r++;
        }
        return res;
    }
};
