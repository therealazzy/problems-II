class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> seen;
        int l = 0, r = 0, res = 0;
        while(r < s.length()){
            while(seen.contains(s[r])){
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
