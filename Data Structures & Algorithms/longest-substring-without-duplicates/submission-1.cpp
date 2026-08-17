class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int ml = 0;
        unordered_set<char> seen;
        while(r < s.length()){
            if(!seen.count(s[r])){
                seen.insert(s[r]);
                ml = max(ml , r - l + 1);
            }else{
                while(seen.count(s[r])){
                    seen.erase(s[l]);
                    l++;
                }
                seen.insert(s[r]);
            }
            r++;
            
        }
        return ml;
    }
};
