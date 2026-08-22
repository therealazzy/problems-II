class Solution {
public:
    int characterReplacement(string s, int k) {
        //two pointers, if the size of the substring - the amount of most repeating chars is less than or 
        //equal to the k operations we can have then we have a new max length
        unordered_map<char, int> count;
        count.reserve(26);
        int l = 0, r = 0, res = 0, maxf = 0;
        while(r < s.length()){
            count[s[r]]++;

            maxf = max(maxf, count[s[r]]);//checks for the new maxf
            if((r - l + 1) - maxf > k){
                count[s[l]]--;
                l++;
            }
            res = max(res, (r - l + 1));
            r++;
        }
        return res;
    }
};
